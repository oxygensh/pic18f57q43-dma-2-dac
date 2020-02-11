/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78.1
        Device            :  PIC18F57Q43
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip software and any
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party
    license terms applicable to your use of third party software (including open source software) that
    may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS
    FOR A PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
    SOFTWARE.
*/

/******************************************************************************
*						Include Files
******************************************************************************/
#include "mcc_generated_files/mcc.h"
//#include "dma.h"

/******************************************************************************
*						Variable Declaration
******************************************************************************/
extern uint8_t swave[64] = {0x8C, 0x99, 0xA5, 0xB1, 0xBC, 0xC7, 0xD1, 0xDA, 0xE2, 0xEA,
                            0xF0, 0xF5, 0xFA, 0xFD, 0xFE, 0xFF, 0xFE, 0xFD, 0xFA, 0xF5,
                            0xF0, 0xEA, 0xE2, 0xDA, 0xD1, 0xC7, 0xBC, 0xB1, 0xA5, 0x99,
                            0x8C, 0x80, 0x74, 0x67, 0x5B, 0x4F, 0x44, 0x39, 0x2F, 0x26,
                            0x1E, 0x16, 0x10, 0x0B, 0x06, 0x03, 0x02, 0x01, 0x02, 0x03,
                            0x06, 0x0B, 0x10, 0x16, 0x1E, 0x26, 0x2F, 0x39, 0x44, 0x4F,
                            0x5B, 0x67, 0x74, 0x80};


/******************************************************************************
*						Main application
******************************************************************************/
void main(void)
{
    SYSTEM_Initialize();
    DMA1_SetDMAPriority(0);
    while (1)
    {
    }
}

/**
 End of File
*/