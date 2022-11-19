#include "INPUT_pulse_detect.h"

//PRIVATE DECLARATIONS
static void restart_timer();
static void stop_timer();
static bool timeout(uint16_t threshold);

static signal_status poll_comm_input();
static signal_status poll_stim_input();

// PUBLIC

signal_status INPUT_detect_comm()
{
    for (uint8_t i = 0; i < NUMBER_OF_CHECKS; i++)
    {
       if(poll_comm_input() == NO_SIGNAL) return NO_SIGNAL;
    }
    return OK_SIGNAL;
}

signal_status INPUT_detect_stim()
{
    for (uint8_t i = 0; i < NUMBER_OF_CHECKS; i++)
    {
       if(poll_stim_input() == NO_SIGNAL) return NO_SIGNAL;
    }
    return OK_SIGNAL;
}

//PRIVATE DEFINITIONS

static signal_status poll_comm_input()
{
    restart_timer();
     while(!timeout(COMM_TIMEOUT))
    {
        if (!COMM_CTRL_GetValue()) continue;
        stop_timer();
        return OK_SIGNAL;
    }
    stop_timer();
        LED_Toggle();

    return NO_SIGNAL;
}

static signal_status poll_stim_input()
{
    restart_timer();
    while(!timeout(STIM_TIMEOUT))
    {
        if (!STIM_CTRL_GetValue()) continue;
        stop_timer();
        return OK_SIGNAL;
    }
    stop_timer();
    return NO_SIGNAL;
}

static void restart_timer()
{
    Timer0_Stop();
    Timer0_Reload();
    Timer0_Start();
}

static void stop_timer()
{
    Timer0_Stop();
}

static bool timeout(uint16_t threshold)
{
    return Timer0_Read() > threshold;
}

