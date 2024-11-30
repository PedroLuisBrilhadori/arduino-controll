#include "./utils/serial.cpp"
#include "./utils/utils.cpp"

#include <iostream>

using namespace std; 


/** 
 * classe responsavel por emular um hardware de arduino onde tenha conectado duas portas seriais
 * e possua a possibilidade de uso das classes `Keyboard` e `Mouse`. 
 * Atendendo esses requisitos e sendo um arduino seria possível rodar a 
 * aplicação que se encontra em `emulator.cpp`
 */
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