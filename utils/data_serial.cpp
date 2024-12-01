#include "./data_serial.h"

DataSerial::DataSerial() {
    size = 0;

}

void DataSerial::push(char ch) {
    Element data;
    data = new Data;

    data->value =ch; 

    if(size == 0) {
        start = data; 
        end = data;
    } else { 
        end->next = data; 
        end = data;
    }
    size += 1;
} 

char DataSerial::pop() {
    char value;
    Element aux;
    
    if(size == 0) return value; 

    value = start->value;
    aux = start; 

    start = start->next;
    delete aux; 

    size -= 1;

    return value;
}
