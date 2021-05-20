# PhaseChecker

## Introduction

PhaseChecker is arduino-powered that can check phase of power line and make user see what happens at power source using Webserver and E-mail, or JSON.

## Is it Useful for me?

This is useful when you run some device, or is managing building(for example, CCTV) but you are not be there all the time. in this case, Blackout is quite irritating. Actually, Blackout happens hardly. But once it happens, You have to figure out the cause. Surely, most of situations are due to Blackout as a result of Surge. But what if Blackout is not because of Surge but because of Intrusion, or worst case, fire?PhaseChecker let you see what happens in there. when PhaseChecker Alerts this Blackout is just simple problem like Surge, you just take it easy. If not, that's exactly when you take action.

it also useful when you operates the device that sensitive at power line.(especially, for example, 3-phase motor, sorry but PhaseChecker not supports 3-Phase at the moment) Since it detects reverse-connection of phase.

## How It Works?

PhaseChecker uses NodeMCU and Arduino UNO as MCU, ZMPT101B as Voltage Sensor.

- NodeMCU gets data from Arduino and interacts with user. User can check current power state accessing web server. when blackout happens, NodeMCU sends E-mail to user.
- Arduino fetches data from ZMPT101B, and send it to NodeMCU.(actually, Arduino is not that important part in this project. but I can't help using it since NodeMCU supports only 1 analog input.)
- both MCUs are communicates using SoftwareSerial.

## Requirements

- NodeMCU(ESP-12E)

- Arduino UNO(Everything is Okay if the board has 5 analog inputs and supports SoftwareSerial.)

- ZMPT101B \* 2-4(add it on-demand)

## Wiring

Coming Soon...
