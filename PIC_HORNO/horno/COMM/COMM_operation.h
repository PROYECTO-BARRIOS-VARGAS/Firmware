#ifndef COMM_OP
#define COMM_OP

#include "proj_types.h"
#include "proj_config.h"
#include "COMM_message.h"
#include "../../mcc_generated_files/uart/uart1.h"
#include "../../mcc_generated_files/system/pins.h"
#include "../../mcc_generated_files/timer/delay.h"

CMD_message COMM_receive_command();
bool COMM_command_available();
void COMM_send_status(uint8_t ipg_status_array[IPG_QUANTITY]);

#endif // guard
