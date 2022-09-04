/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC2 aliases
#define UART1_TX_TRIS                 TRISCbits.TRISC2
#define UART1_TX_LAT                  LATCbits.LATC2
#define UART1_TX_PORT                 PORTCbits.RC2
#define UART1_TX_WPU                  WPUCbits.WPUC2
#define UART1_TX_OD                   ODCONCbits.ODCC2
#define UART1_TX_ANS                  ANSELCbits.ANSELC2
#define UART1_TX_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define UART1_TX_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define UART1_TX_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define UART1_TX_GetValue()           PORTCbits.RC2
#define UART1_TX_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define UART1_TX_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define UART1_TX_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define UART1_TX_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define UART1_TX_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define UART1_TX_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define UART1_TX_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define UART1_TX_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)
   
// get/set RC3 aliases
#define UART1_RX_TRIS                 TRISCbits.TRISC3
#define UART1_RX_LAT                  LATCbits.LATC3
#define UART1_RX_PORT                 PORTCbits.RC3
#define UART1_RX_WPU                  WPUCbits.WPUC3
#define UART1_RX_OD                   ODCONCbits.ODCC3
#define UART1_RX_ANS                  ANSELCbits.ANSELC3
#define UART1_RX_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define UART1_RX_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define UART1_RX_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define UART1_RX_GetValue()           PORTCbits.RC3
#define UART1_RX_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define UART1_RX_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define UART1_RX_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define UART1_RX_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define UART1_RX_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define UART1_RX_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define UART1_RX_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define UART1_RX_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)
   
// get/set RF3 aliases
#define LED_TRIS                 TRISFbits.TRISF3
#define LED_LAT                  LATFbits.LATF3
#define LED_PORT                 PORTFbits.RF3
#define LED_WPU                  WPUFbits.WPUF3
#define LED_OD                   ODCONFbits.ODCF3
#define LED_ANS                  ANSELFbits.ANSELF3
#define LED_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_GetValue()           PORTFbits.RF3
#define LED_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/