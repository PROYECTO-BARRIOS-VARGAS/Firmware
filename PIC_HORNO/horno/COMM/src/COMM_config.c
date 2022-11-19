#include "COMM_config.h"

void COMM_init()
{
    INPUT_get_phy_addr();
    UART1.TransmitEnable(); 
    TXDE1_SetLow();
}