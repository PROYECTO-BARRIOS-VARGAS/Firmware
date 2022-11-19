#include "MUX_driver.h"

mux_error_code MUX_select_input(uint8_t input_num)
{
    if(input_num > 15) return MUX_ERR_OVERFLOW;
    if (input_num & BIT(0)) {MUX_S0_SetHigh();} else { MUX_S0_SetLow();}
    if (input_num & BIT(1)) {MUX_S1_SetHigh();} else { MUX_S1_SetLow();}
    if (input_num & BIT(2)) {MUX_S2_SetHigh();} else { MUX_S2_SetLow();}
    if (input_num & BIT(3)) {MUX_S3_SetHigh();} else { MUX_S3_SetLow();}
    return MUX_OK;
}