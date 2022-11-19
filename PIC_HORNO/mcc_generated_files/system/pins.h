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

// get/set RA0 aliases
#define MUX_S0_TRIS                 TRISAbits.TRISA0
#define MUX_S0_LAT                  LATAbits.LATA0
#define MUX_S0_PORT                 PORTAbits.RA0
#define MUX_S0_WPU                  WPUAbits.WPUA0
#define MUX_S0_OD                   ODCONAbits.ODCA0
#define MUX_S0_ANS                  ANSELAbits.ANSELA0
#define MUX_S0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define MUX_S0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define MUX_S0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define MUX_S0_GetValue()           PORTAbits.RA0
#define MUX_S0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define MUX_S0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define MUX_S0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define MUX_S0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define MUX_S0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define MUX_S0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define MUX_S0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define MUX_S0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)
   
// get/set RA1 aliases
#define MUX_S1_TRIS                 TRISAbits.TRISA1
#define MUX_S1_LAT                  LATAbits.LATA1
#define MUX_S1_PORT                 PORTAbits.RA1
#define MUX_S1_WPU                  WPUAbits.WPUA1
#define MUX_S1_OD                   ODCONAbits.ODCA1
#define MUX_S1_ANS                  ANSELAbits.ANSELA1
#define MUX_S1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define MUX_S1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define MUX_S1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define MUX_S1_GetValue()           PORTAbits.RA1
#define MUX_S1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define MUX_S1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define MUX_S1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define MUX_S1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define MUX_S1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define MUX_S1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define MUX_S1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define MUX_S1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)
   
// get/set RA2 aliases
#define MUX_S2_TRIS                 TRISAbits.TRISA2
#define MUX_S2_LAT                  LATAbits.LATA2
#define MUX_S2_PORT                 PORTAbits.RA2
#define MUX_S2_WPU                  WPUAbits.WPUA2
#define MUX_S2_OD                   ODCONAbits.ODCA2
#define MUX_S2_ANS                  ANSELAbits.ANSELA2
#define MUX_S2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define MUX_S2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define MUX_S2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define MUX_S2_GetValue()           PORTAbits.RA2
#define MUX_S2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define MUX_S2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define MUX_S2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define MUX_S2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define MUX_S2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define MUX_S2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define MUX_S2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define MUX_S2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)
   
// get/set RA3 aliases
#define MUX_S3_TRIS                 TRISAbits.TRISA3
#define MUX_S3_LAT                  LATAbits.LATA3
#define MUX_S3_PORT                 PORTAbits.RA3
#define MUX_S3_WPU                  WPUAbits.WPUA3
#define MUX_S3_OD                   ODCONAbits.ODCA3
#define MUX_S3_ANS                  ANSELAbits.ANSELA3
#define MUX_S3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define MUX_S3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define MUX_S3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define MUX_S3_GetValue()           PORTAbits.RA3
#define MUX_S3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define MUX_S3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define MUX_S3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define MUX_S3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define MUX_S3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define MUX_S3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define MUX_S3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define MUX_S3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)
   
// get/set RA4 aliases
#define STIM_CTRL_TRIS                 TRISAbits.TRISA4
#define STIM_CTRL_LAT                  LATAbits.LATA4
#define STIM_CTRL_PORT                 PORTAbits.RA4
#define STIM_CTRL_WPU                  WPUAbits.WPUA4
#define STIM_CTRL_OD                   ODCONAbits.ODCA4
#define STIM_CTRL_ANS                  ANSELAbits.ANSELA4
#define STIM_CTRL_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define STIM_CTRL_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define STIM_CTRL_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define STIM_CTRL_GetValue()           PORTAbits.RA4
#define STIM_CTRL_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define STIM_CTRL_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define STIM_CTRL_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define STIM_CTRL_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define STIM_CTRL_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define STIM_CTRL_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define STIM_CTRL_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define STIM_CTRL_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)
   
// get/set RA5 aliases
#define COMM_CTRL_TRIS                 TRISAbits.TRISA5
#define COMM_CTRL_LAT                  LATAbits.LATA5
#define COMM_CTRL_PORT                 PORTAbits.RA5
#define COMM_CTRL_WPU                  WPUAbits.WPUA5
#define COMM_CTRL_OD                   ODCONAbits.ODCA5
#define COMM_CTRL_ANS                  ANSELAbits.ANSELA5
#define COMM_CTRL_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define COMM_CTRL_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define COMM_CTRL_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define COMM_CTRL_GetValue()           PORTAbits.RA5
#define COMM_CTRL_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define COMM_CTRL_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define COMM_CTRL_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define COMM_CTRL_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define COMM_CTRL_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define COMM_CTRL_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define COMM_CTRL_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define COMM_CTRL_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)
   
// get/set RA6 aliases
#define BURN_IN1_TRIS                 TRISAbits.TRISA6
#define BURN_IN1_LAT                  LATAbits.LATA6
#define BURN_IN1_PORT                 PORTAbits.RA6
#define BURN_IN1_WPU                  WPUAbits.WPUA6
#define BURN_IN1_OD                   ODCONAbits.ODCA6
#define BURN_IN1_ANS                  ANSELAbits.ANSELA6
#define BURN_IN1_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define BURN_IN1_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define BURN_IN1_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define BURN_IN1_GetValue()           PORTAbits.RA6
#define BURN_IN1_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define BURN_IN1_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define BURN_IN1_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define BURN_IN1_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define BURN_IN1_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define BURN_IN1_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define BURN_IN1_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define BURN_IN1_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)
   
// get/set RA7 aliases
#define BURN_IN0_TRIS                 TRISAbits.TRISA7
#define BURN_IN0_LAT                  LATAbits.LATA7
#define BURN_IN0_PORT                 PORTAbits.RA7
#define BURN_IN0_WPU                  WPUAbits.WPUA7
#define BURN_IN0_OD                   ODCONAbits.ODCA7
#define BURN_IN0_ANS                  ANSELAbits.ANSELA7
#define BURN_IN0_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define BURN_IN0_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define BURN_IN0_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define BURN_IN0_GetValue()           PORTAbits.RA7
#define BURN_IN0_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define BURN_IN0_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define BURN_IN0_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define BURN_IN0_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define BURN_IN0_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define BURN_IN0_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define BURN_IN0_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define BURN_IN0_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)
   
// get/set RB1 aliases
#define PHY_ADDR_0_TRIS                 TRISBbits.TRISB1
#define PHY_ADDR_0_LAT                  LATBbits.LATB1
#define PHY_ADDR_0_PORT                 PORTBbits.RB1
#define PHY_ADDR_0_WPU                  WPUBbits.WPUB1
#define PHY_ADDR_0_OD                   ODCONBbits.ODCB1
#define PHY_ADDR_0_ANS                  ANSELBbits.ANSELB1
#define PHY_ADDR_0_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define PHY_ADDR_0_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define PHY_ADDR_0_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define PHY_ADDR_0_GetValue()           PORTBbits.RB1
#define PHY_ADDR_0_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define PHY_ADDR_0_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define PHY_ADDR_0_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define PHY_ADDR_0_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define PHY_ADDR_0_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define PHY_ADDR_0_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define PHY_ADDR_0_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define PHY_ADDR_0_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)
   
// get/set RB2 aliases
#define TXDE1_TRIS                 TRISBbits.TRISB2
#define TXDE1_LAT                  LATBbits.LATB2
#define TXDE1_PORT                 PORTBbits.RB2
#define TXDE1_WPU                  WPUBbits.WPUB2
#define TXDE1_OD                   ODCONBbits.ODCB2
#define TXDE1_ANS                  ANSELBbits.ANSELB2
#define TXDE1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define TXDE1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define TXDE1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define TXDE1_GetValue()           PORTBbits.RB2
#define TXDE1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define TXDE1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define TXDE1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define TXDE1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define TXDE1_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define TXDE1_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define TXDE1_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define TXDE1_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)
   
// get/set RB5 aliases
#define TEMP_TRIS                 TRISBbits.TRISB5
#define TEMP_LAT                  LATBbits.LATB5
#define TEMP_PORT                 PORTBbits.RB5
#define TEMP_WPU                  WPUBbits.WPUB5
#define TEMP_OD                   ODCONBbits.ODCB5
#define TEMP_ANS                  ANSELBbits.ANSELB5
#define TEMP_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define TEMP_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define TEMP_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define TEMP_GetValue()           PORTBbits.RB5
#define TEMP_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define TEMP_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define TEMP_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define TEMP_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define TEMP_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define TEMP_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define TEMP_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define TEMP_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)
   
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
   
// get/set RC4 aliases
#define PHY_ADDR_1_TRIS                 TRISCbits.TRISC4
#define PHY_ADDR_1_LAT                  LATCbits.LATC4
#define PHY_ADDR_1_PORT                 PORTCbits.RC4
#define PHY_ADDR_1_WPU                  WPUCbits.WPUC4
#define PHY_ADDR_1_OD                   ODCONCbits.ODCC4
#define PHY_ADDR_1_ANS                  ANSELCbits.ANSELC4
#define PHY_ADDR_1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define PHY_ADDR_1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define PHY_ADDR_1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define PHY_ADDR_1_GetValue()           PORTCbits.RC4
#define PHY_ADDR_1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define PHY_ADDR_1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define PHY_ADDR_1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define PHY_ADDR_1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define PHY_ADDR_1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define PHY_ADDR_1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define PHY_ADDR_1_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define PHY_ADDR_1_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)
   
// get/set RC5 aliases
#define PHY_ADDR_2_TRIS                 TRISCbits.TRISC5
#define PHY_ADDR_2_LAT                  LATCbits.LATC5
#define PHY_ADDR_2_PORT                 PORTCbits.RC5
#define PHY_ADDR_2_WPU                  WPUCbits.WPUC5
#define PHY_ADDR_2_OD                   ODCONCbits.ODCC5
#define PHY_ADDR_2_ANS                  ANSELCbits.ANSELC5
#define PHY_ADDR_2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define PHY_ADDR_2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define PHY_ADDR_2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define PHY_ADDR_2_GetValue()           PORTCbits.RC5
#define PHY_ADDR_2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define PHY_ADDR_2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define PHY_ADDR_2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define PHY_ADDR_2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define PHY_ADDR_2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define PHY_ADDR_2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define PHY_ADDR_2_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define PHY_ADDR_2_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)
   
// get/set RC6 aliases
#define PHY_ADDR_3_TRIS                 TRISCbits.TRISC6
#define PHY_ADDR_3_LAT                  LATCbits.LATC6
#define PHY_ADDR_3_PORT                 PORTCbits.RC6
#define PHY_ADDR_3_WPU                  WPUCbits.WPUC6
#define PHY_ADDR_3_OD                   ODCONCbits.ODCC6
#define PHY_ADDR_3_ANS                  ANSELCbits.ANSELC6
#define PHY_ADDR_3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define PHY_ADDR_3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define PHY_ADDR_3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define PHY_ADDR_3_GetValue()           PORTCbits.RC6
#define PHY_ADDR_3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define PHY_ADDR_3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define PHY_ADDR_3_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define PHY_ADDR_3_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define PHY_ADDR_3_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define PHY_ADDR_3_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define PHY_ADDR_3_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define PHY_ADDR_3_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)
   
// get/set RD4 aliases
#define PHY_ADDR_4_TRIS                 TRISDbits.TRISD4
#define PHY_ADDR_4_LAT                  LATDbits.LATD4
#define PHY_ADDR_4_PORT                 PORTDbits.RD4
#define PHY_ADDR_4_WPU                  WPUDbits.WPUD4
#define PHY_ADDR_4_OD                   ODCONDbits.ODCD4
#define PHY_ADDR_4_ANS                  ANSELDbits.ANSELD4
#define PHY_ADDR_4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define PHY_ADDR_4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define PHY_ADDR_4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define PHY_ADDR_4_GetValue()           PORTDbits.RD4
#define PHY_ADDR_4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define PHY_ADDR_4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define PHY_ADDR_4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define PHY_ADDR_4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define PHY_ADDR_4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define PHY_ADDR_4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define PHY_ADDR_4_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define PHY_ADDR_4_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)
   
// get/set RF0 aliases
#define TXDE_TRIS                 TRISFbits.TRISF0
#define TXDE_LAT                  LATFbits.LATF0
#define TXDE_PORT                 PORTFbits.RF0
#define TXDE_WPU                  WPUFbits.WPUF0
#define TXDE_OD                   ODCONFbits.ODCF0
#define TXDE_ANS                  ANSELFbits.ANSELF0
#define TXDE_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define TXDE_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define TXDE_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define TXDE_GetValue()           PORTFbits.RF0
#define TXDE_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define TXDE_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define TXDE_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define TXDE_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define TXDE_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define TXDE_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define TXDE_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define TXDE_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)
   
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