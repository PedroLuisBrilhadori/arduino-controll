// Definir a função sleep de forma compatível com ambos os sistemas operacionais
#ifdef _WIN32
    #include <windows.h>
    #define sleep_ms(milliseconds) Sleep(milliseconds) // Para Windows
#else
    #include <unistd.h>
    #define sleep_ms(milliseconds) usleep((milliseconds) * 1000) // Para Unix (usleep usa microsegundos, então multiplicamos por 1000)
#endif


/**
 * classe responsavel por apenas manter o código que será utilizado no arduino. 
 * 
 * No arduino ela será utilizada para digitar os dados passados e interpretado por eles, 
 * hoje somente é necessário com que ela esteja nos códigos, mas não exatamente possuir um comportamento. 
 * Pois ele é feito pelo próprio arduino e não se encaixa tentar pensar nisso agora.
 */
class Keyboard {
    public: 
        Keyboard();
        void write(char ch);
        void begin();
};

int delay(int value); 