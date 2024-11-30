#include "emulator.h"

using namespace std;


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

    char ch = Serial1.read(); 

    cout << ch << endl;  
}

void Emulator::serialInput(char ch) {
    return Serial1.write(ch);
}
