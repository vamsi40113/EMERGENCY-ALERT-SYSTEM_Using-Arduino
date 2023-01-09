# EMERGENCY-ALERT-SYSTEM_Using-Arduino

# ABSTRACT
This is a simple Emergency alert system using GSM module, ultrasonic and  Arduino. This is capable of alerting others from emergency through GSM Module. Similarly it can also be used to send an SMS.
So we have interfaced GSM Module SIM800/SIM900 with Arduino UNO Board. A 16x2 LCD is used for displaying the operations that are happening like displaying signal strength, carrier name, outgoing call, SMS sent received status, and also time elapsed. The Ultrasonic sensor  is used to  when the person comes closer to sensor at a particular range sends the data GSM module and call to the particular number The mic is used to transmit the spoken sound and a speaker is used for ringing and listening to voice.
SIM 800 is a quad-band GSM/GPRS module designed for the global market. It works on frequencies GSM 850MHz, EGSM 900MHz, DCS 1800MHz, and PCS 1900MHz. SIM800 features GPRS multi-slot class 12/ class 10 (optional) and supports the GPRS coding schemes CS-1, CS-2, CS-3 and CS-4. With a tiny configuration of 24243mm, SIM800 can meet almost all the space requirements in users’ applications, such as M2M, smartphone, PDA, and other mobile devices.
SIM800 has 68 SMT pads and provides all hardware interfaces between the module and customers’ boards. SIM800 is designed with a power-saving technique so that the current consumption is as low as 1.2mA in sleep mode. SIM800 integrates TCP/IP protocol and extended TCP/IP AT commands which are very useful for data transfer applications.

# Required Components
GSM Module SIM800/SIM900, Arduino UNO, ultrasonic Sensor, LCD Display, Connectiong wires, 9v baterry

# Flow chart

![image](https://user-images.githubusercontent.com/81632017/157478423-db347235-d7b4-4a2b-a90e-f7fd48e92661.png)

# Connections

Connect  the lcd pins to Arduino pins of 11,5,4,3,2 respectively. Connect the buzzer and mic with one of Arduino pins of 6,7 . then interface ultrasonic sensor of trigpin connected to Arduino pin of  9 and echo pin is input and then interface the GSM module with Arduino board by connecting the pins of 8 and 9 and GSM is connected with 12volts or 9 volts power. Dump the code into Arduino uno board and run the program . 

# RESULT & CONCLUSION
Hence wireless emergency alert system is implemented using GSM Module and ultrasonic sensor with Arduino. It can be implemented in various sectors like health care sector , Industrial sector , Financial sector ,  ETC .  It Alerts People Fast: The use of an Emergency Notification System allows for real time communication. With advanced technology, these notifications now offer real time follow up instruction, reports and assistance.
 Accuracy: In the case of an emergency, communicating clearly is vital.
The purpose of alerts and warnings is to provide the necessary information to warn the public and effect the necessary actions that will lead to their safety and to deliver the messages to populations at risk of imminent threats.

# OUTPUT

![image](https://user-images.githubusercontent.com/81632017/157478822-899456f2-a514-427b-a5c5-39bfaf996225.png)

# video output

https://user-images.githubusercontent.com/81632017/157481059-dc041402-7fa5-4e5d-aa6c-5b49d2a5a7c6.mp4



