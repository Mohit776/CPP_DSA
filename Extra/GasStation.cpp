#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int g = 0, c = 0;

        // ----------------------
        for (int i = 0; i < gas.size(); i++)
        {
            g += gas[i];
            c  += cost[i];
        }

      
        if (c > g)
        {
            return -1;
        }
        //-------------------------

        int start = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            int cg = cg + gas[i] - cost[i];

            if (cg < 0)
            {
                cg = 0;
                start = i+1;
            }

        }
        return start;
    }
};

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};

    return 0;
}