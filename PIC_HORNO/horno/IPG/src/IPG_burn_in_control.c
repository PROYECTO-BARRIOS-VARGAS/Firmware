#include "IPG_burn_in_control.h"

// PRIVATE DECLARATIONS

static operation_status set_burn_in_pin(IPG_num ipg_num);
static operation_status unset_burn_in_pin(IPG_num ipg_num);

// PUBLIC FUNCTIONS
operation_status IPG_start_burn_in(IPG_num ipg_num)
{
    // TODO check current status

    // set pins to active
    set_burn_in_pin(ipg_num);
    // Save new state
    

}

operation_status IPG_stop_burn_in(IPG_num ipg_num)
{
    // TODO check current status
    
    // set pin to inactive
    unset_burn_in_pin(ipg_num);
    // refresdh status

}


// PRIVATE DEFINITIONS

static operation_status set_burn_in_pin(IPG_num ipg_num)
{
    // unset correspondent pin
    switch (ipg_num)
    {
    case 0:
        BURN_IN0_SetHigh();
        break;
    case 1:
        BURN_IN1_SetHigh();
        break;
    // case 2:
    //     BURN_IN2_SetHigh();
    //     break;
    // case 3:
    //     BURN_IN3_SetHigh();
    //     break;
    // case 4:
    //     BURN_IN4_SetHigh();
    //     break;
    // case 5:
    //     BURN_IN5_SetHigh();
    //     break;
    // case 6:
    //     BURN_IN6_SetHigh();
    //     break;
    // case 7:
    //     BURN_IN7_SetHigh();
    //     break;
    // case 8:
    //     BURN_IN8_SetHigh();
    //     break;
    // case 9:
    //     BURN_IN9_SetHigh();
    //     break;    
    default:
        return FAILED;
        break;
    }
    return SUCCESS;
}

static operation_status unset_burn_in_pin(IPG_num ipg_num)
{
    // unset correspondent pin
    switch (ipg_num)
    {
    case 0:
        BURN_IN0_SetLow();
        break;
    case 1:
        BURN_IN1_SetLow();
        break;
    // case 2:
    //     BURN_IN2_SetLow();
    //     break;
    // case 3:
    //     BURN_IN3_SetLow();
    //     break;
    // case 4:
    //     BURN_IN4_SetLow();
    //     break;
    // case 5:
    //     BURN_IN5_SetLow();
    //     break;
    // case 6:
    //     BURN_IN6_SetLow();
    //     break;
    // case 7:
    //     BURN_IN7_SetLow();
    //     break;
    // case 8:
    //     BURN_IN8_SetLow();
    //     break;
    // case 9:
    //     BURN_IN9_SetLow();
    //     break;    
    default:
        return FAILED;
        break;
    }
    return SUCCESS;
}