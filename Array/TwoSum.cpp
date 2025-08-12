#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {

            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    return vector<int>{i, j};
                }
            }
        }
    }

    //====================================================

    vector<int> twosum_o(vector<int> nums, int target)
    {

        int f = 0, s = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            f = nums[i];
            s = target - nums[i];

            if(f+s){
                
            }
        }
    }
};

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};

    return 0;
}