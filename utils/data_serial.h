/**
 * classe utilizada para guardar os dados que seriam utilizado 
 * para "emular" comunicações que seriam feitas por serial
 * 
 * uma abstração para uma fila de caracteres, 
 * com métodos de push & pop de dados em uma sequeência de caractere.
 * 
 * essa mesma estrutura deve ser utilizada por diferentes tipos de coisas, 
 * por isso sua abstração de push & pop, 
 * pode haver necessidade de novos métodos para manipulação de dados entre duas entidades diferentes
 */
class DataSerial {
     private: 
        struct Data {
            char value; 
            Data *next;
        };
        int size = 0;
        typedef Data *Element; 
        Element start; 
        Element end;

    public:
        DataSerial();
        void push(char ch); 
        char pop();
};