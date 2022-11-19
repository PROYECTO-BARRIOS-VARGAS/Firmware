
#include "state_machine.h"

int main(void)
{
    SYSTEM_init();
    
    STATE_MACHINE_init();

    
    while(1)
    {

        run_state_task();
        
        run_system_eval();

        check_request_command();

        update_state();

    }
}