#include "./utils/serial.cpp"
#include "./utils/utils.cpp"

#include <iostream>

using namespace std; 

class Emulator {
    private: 
        Serial Serial1; 
        Serial Serial; 
        Keyboard Keyboard;

    public: 
        Emulator(const DataSerial& data);
        void setup(); 
        void loop();
        void serialInput(char ch);
};