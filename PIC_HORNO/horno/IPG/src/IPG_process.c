#include "IPG_process.h"

void run_status_update(IPG_num ipg_num)
{
    signal_status comm_status, stim_status; 

    comm_status =  IPG_comm_check(ipg_num);
    IPG_set_comm_status(ipg_num,comm_status);

    if (comm_status == OK_SIGNAL) 
    {    
        if (IPG_get_burn_status(ipg_num) == BURN_IN_OFF)
        {
            IPG_start_burn_in(ipg_num);
            IPG_set_burn_status(ipg_num,BURN_IN_ON);
        }

        stim_status = IPG_stim_check(ipg_num);
        IPG_set_stim_status(ipg_num,stim_status);
    }
    else
    {
        IPG_set_stim_status(ipg_num,NO_SIGNAL);
        IPG_stop_burn_in(ipg_num);
    }
}