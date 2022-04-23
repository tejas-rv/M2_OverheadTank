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
| STRENGTHS | WEAKNESS | OPPORTUNITIES | THREATS 
|:---:|:---:|:---:|:---:|
| Low cost | NO GUI | Quick Solution | If no proper separation between AC & DC then circut may burn |


# Detail requirements
## High Level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|HLR-1| Water level indication |Implemented|
|HLR-2| Automatic Motor ON / OFF |Implemented|
|HLR-3| Automatically turn ON/OFF the motor when specific level is reached |Future|

##  Low level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|LLR-1| User shall be able to Turn ON/OFF the system |Implemented|
|LLR-2| User shall be able to see the amount of water present in their tank in LCD |Future|

# 4W&#39;s and 1&#39;H

## Who:

* All the people who are having Overhead tank.

## What:

* To Identify the amount of water present.

## When:

* During the step-In training, this is the final project assessment and development started on 20th of march.

## Where:

* This can be used in all over the globe.

## How:

* users can use this code to easy their work and project.


## BLOCK DIAGRAM

![image](https://github.com/tejas-rv/M2_OverheadTank/blob/main/2_Design/BD.png)

## CIRCUIT DIAGRAM

![image](https://github.com/tejas-rv/M2_OverheadTank/blob/main/2_Design/CD.png)

## FLOW CHART
![image](https://github.com/tejas-rv/M2_OverheadTank/blob/main/2_Design/FC.png)

# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HLR-1      | Is user able to see Water level indication  |Samp ip|exp i/p| act o/p | Requirement based |
|  HLR-2      | Is the user able to witness automatic turning ON/OFF of LED| Samp i/p | exp i/p| act i/p  | Requirement based  |
|  HLR-3      | Is the user able to witness automatic turning ON/OFF of Motor| Samp i/p | exp i/p| act o/p  | Requirement based  |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  LLR-1      | is the user able to power ON/OFF the system | exp i/p | exp o/p | act o/p|Requirement based |
|  LLR-2      | is the user able to see amount of water via LED|   exp i/p | exp o/p | act o/p|Requirement based  |

# OUTPUT
## 1 Tank Not FULL - Motor is ON
![image](https://github.com/tejas-rv/M2_OverheadTank/blob/main/4_TestCases/Output-1.png)

## 2 Tank FULL - Motor is OFF
![image](https://github.com/tejas-rv/M2_OverheadTank/blob/main/4_TestCases/Output-2.png)
