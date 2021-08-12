class MinStack {
    vector<int> stack;
    vector<int> Min_stack;
    vector<int> Max_stack;

public:
    void push(int data) {
        int current_min = data;
        int current_max = data;

        if(Min_stack.size()){
            current_min = min(Min_stack[Min_stack.size()-1],data);
            current_max = min(Max_stack[Max_stack.size()-1],data);
        }
        Min_stack.push_back(current_min);
        Max_stack.push_back(current_max);
        stack.push_back(data);
    }
        void pop() {
        Min_stack.pop_back();
        Max_stack.pop_back();
        stack.pop_back();
    }
    int top() {
        return stack[stack.size()-1];
    }
    int getMin() {
        return Min_stack[Min_stack.size()-1];
    }

};