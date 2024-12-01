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

        void push(char ch); 
        char pop();

    public: 
        Task(char* buffer, int length);
        int getTaskSize();
        void getTask(char *buffer); 
        void deleteTask();
};