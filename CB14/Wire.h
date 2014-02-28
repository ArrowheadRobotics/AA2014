/*
 * Defines wires
 */
#ifndef WIRE_H
#define WIRE_H


#define PRACTICECODE 1
//PWM
#define portLEFTDRIVE 1
#define portRIGHTDRIVE 2
#define portCLAWLIFT 4

//RELAY/
#define portROLLER 2
#define portCOMPRESSOR 1
#define portLED 3

//MODULES
#define moduleONE 1

//SOLENOID OBJECTS PRACTICE
//DO NOT CHANGE THESE!
#define portSHIFTHIGH 1
#define portSHIFTLOW 2
#define portSHOOTTRIGGERIN 5
#define portSHOOTTRIGGEROUT 6
#define portSHOOTPUSHIN 7
#define portSHOOTPUSHOUT 8
#define portINTAKEARMUP 3
#define portINTAKEARMDOWN 4

//SOLENOID OBJECTS REAL
#define port1SHIFTHIGH 1
#define port1SHIFTLOW 2
#define port1FOURSHOT1 3
#define port1FOURSHOT2 4
#define port1TRIGGER 5
#define port1TWOSHOT1 7
#define port1TWOSHOT2 8
#define port1ARM 6
/*
 * trigger=5
 * twoshot=7,8
 * fourshot=3,4
 * arm=6
 */

//IO
//Encoders use two ports: A and B
#define ioDRIVEENCODERLEFTA 1
#define ioDRIVEENCODERLEFTB 2 
#define ioDRIVEENCODERRIGHTA 3
#define ioDRIVEENCODERRIGHTB 4
#define ioBALLSWITCH 5
#define ioCOMPPRESSURESW 10
#define ioANALOGPOT 1
#define ioBALLINSWITCH 6

#endif

