class DataSerial {
     private: 
        char buffer[255];
        int index;

    public:
        DataSerial();
        void push(char ch); 
        char pop();
};