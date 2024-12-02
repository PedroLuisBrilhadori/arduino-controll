#include "./task.h"

Task::Task(char* buffer) {
    size = 0; 

    char ch;
    int counter = 0;
    
    do {
        ch = buffer[counter];
       

        // limita o tamanho da task em 10 caracteres
        // essa condição evita loops infinitos caso a task não possua a instrução ETX
        if(counter > 10) {
            valid = false; 
            return;
        }
        
        // a instrução começa a partir do caractere STX || asci 01
        if(ch == 2) {
                counter++;
                continue;
        }

     
        // o modo da task sempre será o segundo caractere do buffer
        if(counter == 1) {
            mode = ch;
            counter++;
            continue;
        }

        if(ch == 3)  continue;

        counter++;
        push(ch);
        
    // a instrução termina no caractere ETX || asci 03
    } while (ch != 3);

    valid = true;
    
}

char Task::getMode() {
    return mode;
}

bool Task::isValid() {
    return valid;
}

void Task::getData(char* buffer) {
    Element aux;  
    aux = start; 

    for(int index = 0; index < size; index++) {
        buffer[index] = aux->value; 
        aux = aux->next;
    }
}


void Task::push(char buffer) {
    Element data; 
    data = new Data;

    data->value = buffer;
    data->next = nullptr;

    if(size == 0) {
        start = data; 
        end = data;
    } else {
        end->next = data;
        end = data;
    }

    size +=1;
}

char Task::pop() {
    char buffer;
    Element aux; 

    if(size == 0) return buffer;

    buffer = start->value;
    aux = start;

    start = start->next; 
    delete aux;

    size -=1;

    return buffer;
}