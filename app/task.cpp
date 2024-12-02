#include "./task.h"

Task::Task(char* buffer) {
    size = 0; 

    char ch;
    int counter = 0;
    
    do {
        counter++;
        ch = buffer[counter];

        // limita o tamanho da task em 10 caracteres
        // essa condição evita loops infinitos caso a task não possua a instrução ETX
        if(counter > 10) {
            valid = false; 
            return;
        }
        
        // a instrução começa a partir do caractere STX || asci 01
        if(ch == 01) continue;

        // o modo da task sempre será o segundo caractere do buffer
        if(counter == 1) {
            mode = ch;
            continue;
        } 

        push(ch);
    // a instrução termina no caractere ETX || asci 03
    } while (ch == 03);
    
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