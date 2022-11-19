#ifndef IPG_DATA
#define IPG_DATA

#include "proj_types.h"
#include "proj_config.h"

// Global IPG status array
IPG_status IPG_array[IPG_QUANTITY] = {0,0};

void IPG_set_comm_status(IPG_num, signal_status);
void IPG_set_stim_status(IPG_num, signal_status);
void IPG_set_burn_status(IPG_num, burn_in_status);

signal_status  IPG_get_comm_status(IPG_num);
signal_status  IPG_get_stim_status(IPG_num);
burn_in_status IPG_get_burn_status(IPG_num);

IPG_status IPG_get_status(IPG_num);


#endif // guard
