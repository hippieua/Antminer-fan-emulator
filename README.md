**Arduino fan emulator**

**Part list**

Arduino Nano ( or  any other based on 328p)
* 1 * 10K resistor
* 1 * 1K resistor
* 1 * npn 2n222* transistor
* wires, connectors

Upload code to arduino via [Arduino IDE](https://www.arduino.cc/en/Main/Software)

Arduino is powered from fan terminal directly from antminer

Black is GND, Red is +12V, 
Yellow wire (usualy 3rd is fan output that we are going to emulate).

You need to connect +12V to VIN pin ou arduino, and GND to GND pin.

2n222 base should be connected to D9 through 1K resistor
2n222 collector should be connected to +12V through 10K resistor
2n222 emitter should be connected to GND

Output signal will be generated between 10R resistor and collector.
