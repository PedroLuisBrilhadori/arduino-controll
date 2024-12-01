#include "./serial.h"

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

void Serial::readBytes(char *buffer, int length) {
    for(int index = 0; index < length; index++) {
        buffer[index] = data.pop();
    }
}
