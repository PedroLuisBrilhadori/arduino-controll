class TaskList {
    private:
        struct Task {
            char *value;
            Task *next;
        };
        typedef Task *Element;
        Element start; 
        Element end;
        int size = 0;
        
        void push(char *buffer);
        char* pop();

    public: 
        TaskList();
     

};