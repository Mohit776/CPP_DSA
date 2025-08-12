#include <iostream>
#include <stack>
#include <vector>
using namespace std;


class MyQueue {
public:
    stack<int> s, v;

    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if (s.empty()) return -1;

        // Move to v
        while (!s.empty()) {
            v.push(s.top());
            s.pop();
        }

        int frontVal = v.top(); // store value
        v.pop(); // remove it

        // Move back to s
        while (!v.empty()) {
            s.push(v.top());
            v.pop();
        }

        return frontVal;
    }
    
    int peek() {
        if (s.empty()) return -1;

        // Move to v
        while (!s.empty()) {
            v.push(s.top());
            s.pop();
        }

        int frontVal = v.top(); // store value

        // Move back to s
        while (!v.empty()) {
            s.push(v.top());
            v.pop();
        }

        return frontVal;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main()
{
    vector<int> arr = {6,8,0,1,3};

    return 0;
}