#ifndef MUX_DRV
#define MUX_DRV

#include <stdio.h>
#include "../../mcc_generated_files/system/pins.h"

#define BIT(bit_num) (1UL<<bit_num)

typedef enum 
{
    MUX_OK = 0,
    MUX_ERR_OVERFLOW = 1
}mux_error_code;

mux_error_code MUX_select_input(uint8_t input_num);

#endif // guard

