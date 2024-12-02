class Task {
    private: 
        int size = 0; 
        struct Data {
            char value; 
            Data *next;
        }; 
        typedef Data *Element; 
        Element start;
        Element end;
        
        char mode;
        bool valid;

        void push(char ch); 
        char pop();

    public: 
        Task(char* buffer);
        int getTaskSize();
        void getData(char *buffer); 
        char getMode(); 
        bool isValid();
};