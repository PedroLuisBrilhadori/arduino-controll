#include "./data_serial.h"

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
