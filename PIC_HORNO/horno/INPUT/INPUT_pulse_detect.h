#ifndef INPUT_PULSE_DETECT
#define INPUT_PULSE_DETECT

#include "proj_types.h"
#include "../../mcc_generated_files/system/pins.h"
#include "../../mcc_generated_files/timer/tmr0.h"

#define NUMBER_OF_CHECKS 3 

#define COMM_TIMEOUT 2000 // //TODO: VERIFICAR EN TELEMETRY

#define STIM_TIMEOUT 4000 //



signal_status INPUT_detect_comm();
signal_status INPUT_detect_stim();

#endif // guard
