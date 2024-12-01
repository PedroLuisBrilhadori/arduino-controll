#include "emulator.h"


Emulator::Emulator(
    const DataSerial& data
) : Serial(data), Serial1(data) {

}

void Emulator::setup() {
    Serial.begin(9600);
    Serial1.begin(9600);
}

void Emulator::loop() {
    if(!Serial1.available()) return; 

    delay(1);
    char array[25]; 
    Serial1.readBytes(array, 10);
}

void Emulator::serialInput(char ch) {
    return Serial1.write(ch);
}
