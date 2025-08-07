#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;

class MinStack
{
public:
    stack<pair<int, int>> s;   //val, minVal
    MinStack()
    {
    }

    void push(int val)
    {
        if (s.empty())
        {
            s.push({val, val});
        }
        else
        {
            int minVal = min(val, s.top().second );
            s.push({val,minVal});
        }
    }

    void pop()
    {
        s.pop();
    }

    int top()
    {return s.top().first;
    }

    int getMin()
    {return s.top().second;
    }
};

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};

    return 0;
}