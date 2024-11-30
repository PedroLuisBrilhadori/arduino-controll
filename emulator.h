
class Emulator {
    private: 
        Serial Serial1; 
        Serial Serial; 
        Keyboard Keyboard;

    public: 
        Emulator(const DataSerial& data);
        void setup(); 
        void loop();
        void serialInput(char ch);
};