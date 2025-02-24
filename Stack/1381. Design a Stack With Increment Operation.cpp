
    /*
    Time complexity : nil
    Space complexity : nil
    */
    
    
    /*
    Additional Notes : nil
    */

    
    class CustomStack {
    private:
        stack<int> stack;
        vector<int> inc;
        int size;
public:
    CustomStack(int maxSize) {
        this->size=maxSize;
        inc.resize(size,0);
    }
    
    void push(int x) {
        if(stack.size()<size) stack.push(x);
    }
    
    int pop() {
        if(stack.size()==0)return -1;
        int idx=stack.size()-1;
        int top=stack.top()+inc[idx];
        stack.pop();
        if(idx>0){
            inc[idx-1]+=inc[idx];
        }
        inc[idx]=0;
        return top;
    }
    
    void increment(int k, int val) {
        int n= min(k,(int)stack.size());
        if(n>0){
            inc[n-1]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/design-a-stack-with-increment-operation/
    */
    
    