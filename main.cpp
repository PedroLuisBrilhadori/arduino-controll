#include <iostream>
#include "utilidades.cpp"
#include "emulator.cpp"

using namespace std;
 

int main () {
    DataSerial data; 
    Emulator leonardo(data);
    char ch;
 
    cout << "\t\tEMULAÇÃO INICIADA" << endl; 

    leonardo.setup(); 

    do {
        ch = getchar();
        if(ch != EOF) {
            leonardo.serialInput(ch);
        }

        leonardo.loop();
    } while(true);

    return 0;
}