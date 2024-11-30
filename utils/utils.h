// Definir a função sleep de forma compatível com ambos os sistemas operacionais
#ifdef _WIN32
    #include <windows.h>
    #define sleep_ms(milliseconds) Sleep(milliseconds) // Para Windows
#else
    #include <unistd.h>
    #define sleep_ms(milliseconds) usleep((milliseconds) * 1000) // Para Unix (usleep usa microsegundos, então multiplicamos por 1000)
#endif

class Keyboard {
    public: 
        Keyboard();
        void write(char ch);
};

int delay(int value); 