#include "IPG_data.h"

//void set_IPG_status(IPG_num ipg_num, IPG_status status)
//{
//    // TODO check num valid
//    IPG_array[ipg_num] = status;
//}

void IPG_set_comm_status(IPG_num num, signal_status status)
{
    IPG_array[num].communication_ok = status;
}
void IPG_set_stim_status(IPG_num num, signal_status status)
{
    IPG_array[num].stimulation_ok = status;
}
void IPG_set_burn_status(IPG_num num, burn_in_status status)
{
    IPG_array[num].burn_in_status = status;
}

signal_status  IPG_get_comm_status(IPG_num num)
{
    return IPG_array[num].communication_ok;
}
signal_status  IPG_get_stim_status(IPG_num num)
{
    return IPG_array[num].stimulation_ok;
}
burn_in_status IPG_get_burn_status(IPG_num num)
{
    return IPG_array[num].burn_in_status;
}

IPG_status IPG_get_status(IPG_num ipg_num)
{
    // TODO check num valid
    return IPG_array[ipg_num];
}
