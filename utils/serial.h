#include "./data_serial.cpp"


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

