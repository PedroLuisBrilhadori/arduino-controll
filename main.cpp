#include "./emulator.cpp"
 

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