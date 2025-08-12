#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(nums[i]) != m.end())
            {
                return nums[i];
            }
            m[nums[i]] = i;
        }

        return -1;
    }


//=================================================

};

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};

    return 0;
}