#include "./data_serial.cpp"

/**
 * classe utilizada para "emular" uma porta serial. 
 * 
 * o que queremos emular seria passar e receber dados de uma porta para outra, 
 * ou seja. Compartilhar uma sequência de dados (exclusivamente do tipo char), 
 * entre duas classes de conexão: Serial e Serial1 
 * 
 * é assim que o arduino fara uso das portas seriais e por isso a abstração é pensada dessa maneira.
 */
class Serial {
    private: 
        DataSerial data;
        
    public: 
        Serial(const DataSerial& data);
        void begin(int rate);
        bool available();
        char read();
        void write(char ch);
};

