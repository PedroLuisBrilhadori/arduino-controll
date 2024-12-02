#include "./emulator.cpp"
#include "./app/task_list.cpp" 

int main () {
    DataSerial data; 


    char buffer[4] = {
        2, 
        75, 
        65,
        3, 
    };

    Task *task; 
    task = new Task(buffer);


    cout << task->getMode() << endl;

    cout << task->isValid() << endl;

    return 0;
    
}