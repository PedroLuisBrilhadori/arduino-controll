class DataSerial {
     private: 
        char buffer[255];
        int index;

    public:
        DataSerial();
        void push(char ch); 
        char pop();
};


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



class Keyboard {
    public: 
        Keyboard();
        void write(char ch);
};

int delay(int value); 