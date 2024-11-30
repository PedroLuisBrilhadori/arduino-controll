// Definir a função sleep de forma compatível com ambos os sistemas operacionais
#ifdef _WIN32
    #include <windows.h>
    #define sleep_ms(milliseconds) Sleep(milliseconds) // Para Windows
#else
    #include <unistd.h>
    #define sleep_ms(milliseconds) usleep((milliseconds) * 1000) // Para Unix (usleep usa microsegundos, então multiplicamos por 1000)
#endif

#include "utilidades.h"


DataSerial::DataSerial() {}

void DataSerial::push(char ch) {
    if(index == 255) return;
    index++; 

    buffer[index] = ch;
} 

char DataSerial::pop() {
    if(index == 0) return; 
    char value = buffer[index];
    index--; 

    return value;
}

Serial::Serial(const DataSerial& data) : data(data) {}

void Serial::begin(int rate) {}

bool Serial::available() {
    return true; 
}

char Serial::read() {
    return data.pop();
}

void Serial::write(char ch) {
    return data.push(ch);
}


// delay & keyboard

int delay(int value) {
    return sleep_ms(value);
}

Keyboard::Keyboard() {

}

void Keyboard::write(char ch) {

}

