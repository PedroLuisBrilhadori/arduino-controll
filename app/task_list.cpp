#include "./task_list.h"

TaskList::TaskList() {
    size = 0;
}

void TaskList::push(char* buffer) {
    Element data; 
    data = new Task;

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

char* TaskList::pop() {
    char *buffer;
    Element aux; 

    if(size == 0) return buffer;

    buffer = start->value;
    aux = start;

    start = start->next; 
    delete aux;

    size -=1;

    return buffer;
}