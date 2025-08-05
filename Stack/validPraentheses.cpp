#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> v;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            {

                v.push(s[i]);
            }
            else
            {
                if (v.size() == 0)
                {
                    return false;
                }

                if ((v.top() == '(' && s[i] == ')') ||
                   ( v.top() == '[' && s[i] == ']') ||
                  (  v.top() == '{' && s[i] == '}'))
                {
                    v.pop();
                }else return false;
            }
        }

       return v.empty();
    }
};

int main()
{

    string s = "piyush";
}