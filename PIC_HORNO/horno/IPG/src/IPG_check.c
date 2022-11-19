#include "IPG_check.h"

signal_status IPG_comm_check(IPG_num ipg_num)
{
    MUX_select_input(ipg_num);
    // detect if signal is present
    return INPUT_detect_comm();
}

signal_status IPG_stim_check(IPG_num ipg_num)
{
    MUX_select_input(ipg_num);
    // detect if signal is present
    return INPUT_detect_stim();
}
