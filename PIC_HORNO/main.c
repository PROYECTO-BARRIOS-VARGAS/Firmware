 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
� [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include "IPG_process.h"
#include "IPG_data.h"
#include "COMM_operation.h"
#include "COMM_config.h"

/*
    Main application
*/
void delay(uint32_t value)
{
    for(volatile int i = 0; i < value; i++);
}

typedef struct MESSAGE{
    uint8_t opcode  : 4;
    uint8_t addr    : 4;
    uint8_t data    : 8;
}MESSAGE;

MESSAGE message_buffer;

int main(void)
{    
    SYSTEM_Initialize();
      
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 
    UART1_Enable();
    COMM_init();
    
//    LED_SetLow();
    CMD_message cmd;
    IPG_status  status[2];
//    LED_Toggle();
    __delay_ms(10);
    while(1)
    {
        run_status_update(0);
        run_status_update(1);
        __delay_ms(1);
        if (COMM_command_available())
        {
            cmd = COMM_receive_command();
//            IPG_set_comm_status(0, OK_SIGNAL);
//            IPG_set_comm_status(1, OK_SIGNAL);
            status[0] = IPG_get_status(0);
            status[1] = IPG_get_status(1);
            COMM_send_status(((uint8_t *)&cmd));
            LED_Toggle();
        }
        
    }
}
            
// UART READ
//        if (UART1.IsRxReady())
//        {
//            buff = UART1.Read();
//            LED_Toggle();
//        }
//  UART WRITE
//        if (UART1.IsTxReady())
//        {   
//            UART1.Write(message_buffer);
////            while (!UART1.IsTxDone());
//            message_buffer++; 
//            delay(100000);
//        }   
//  UART ECHO
        
//        if (UART1.IsRxReady())
//        {
//            
//            
//            buff = UART1.Read();
//            UART1.Read();
//            LED_Toggle();
//            TXDE_SetHigh();
//            if (UART1.IsTxReady())
//            {   
//                UART1.Write(buff);
//                while (!UART1.IsTxDone());
//            }
//            TXDE_SetLow();
//        }
//        LED_Toggle();
//        delay(10000);
//    }    
//}
