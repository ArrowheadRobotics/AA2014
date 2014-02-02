/*
 * Defines wires
 */
#ifndef WIRE_H
#define WIRE_H

//PWM
#define portLEFTDRIVE 1
#define portRIGHTDRIVE 2
#define portCLAWLIFT 4

//RELAY/
#define portROLLER 2
#define portCOMPRESSOR 1

//MODULES
#define moduleONE 1

//SOLENOID OBJECTS
#define portSHIFTHIGH 1
#define portSHIFTLOW 2
#define portSHOOTTRIGGERIN 5
#define portSHOOTTRIGGEROUT 6
#define portSHOOTPUSHIN 7
#define portSHOOTPUSHOUT 8
#define portINTAKEARMUP 3
#define portINTAKEARMDOWN 4

//IO
//Encoders use two ports: A and B
#define ioDRIVEENCODERLEFTA 1
#define ioDRIVEENCODERLEFTB 2 
#define ioDRIVEENCODERRIGHTA 3
#define ioDRIVEENCODERRIGHTB 4
#define ioBALLSWITCH 5
#define ioCOMPPRESSURESW 10
#define ioANALOGPOT 1

#endif

