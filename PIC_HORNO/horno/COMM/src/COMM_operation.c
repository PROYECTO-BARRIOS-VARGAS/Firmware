#include "COMM_operation.h"

CMD_message COMM_receive_command()
{
    CMD_message ret_cmd;
    ret_cmd.raw[0] = UART1.Read();
    ret_cmd.raw[1] = UART1.Read();
    return ret_cmd;
}

bool COMM_command_available()
{
    return (bool) UART1.IsRxReady();
}

void COMM_send_status(uint8_t ipg_status_array[IPG_QUANTITY])
{
    TXDE1_SetHigh();
    for ( int byte_num = 0; byte_num < IPG_QUANTITY; byte_num++)
    {
        UART1.Write(ipg_status_array[byte_num]);
        __delay_ms(DELAY_BETWEEN_STATUS_BYTE_SEND);
    }
    TXDE1_SetLow();
}