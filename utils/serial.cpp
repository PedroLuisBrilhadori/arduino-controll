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
