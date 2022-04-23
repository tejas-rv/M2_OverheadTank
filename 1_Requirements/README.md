# Requirements
## Introduction
This Project uses moisture sensor (FC-28) to sense the water level in an overheadtank. 
Here we have make use of simple array of switches to indicate the digital value that is coming out of FC-28 module.
Realtime application of this can be used to reduce the Human Interference in turning ON/OFF the motor.

## Details
* ATMEGA328 is used to control the motor.
* DC Motor is used instead of 1HP/0.5HP AC Motor. While using the AC Motor Relay has to be used.
* PORT-D of ATMEGA328 is used for giving input to the microcontroller through Array of Switches.
* When the water touches the sensor it generates logic HIGH else logic LOW, this is implemented with the help of switches.
* PORT-B of ATMEGA328 is used for observing the output in LED.

## SWOT - ANALYSIS
| STRENGTHS | WEAKNESS | OPPORTUNITIES | THREATS |
|:---:|:---:|
| Low cost | NO GUI | Quick Solution | If no proper separation between AC & DC then circut may burn |


