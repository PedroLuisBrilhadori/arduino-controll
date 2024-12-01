#include "./task.h"

Task::Task(char* buffer, int length) {
    size = 0; 

    for(int index = 0; index < length; index++) {
        char ch = buffer[index];
        push(ch);
    }
}

void Task::getTask(char* buffer) {
    Element aux;  
    aux = start; 

    for(int index = 0; index < size; index++) {
        buffer[index] = aux->value; 
        aux = aux->next;
    }
}

void Task::deleteTask() {
    for(int index = 0; index < size; index++) {
        pop();
    }
}

int Task::getTaskSize() {
    return size;
}