#include <iostream>
#include <stack>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

     
        int totalSum = 0;
    for (int num : nums)
        totalSum += num;

    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
            return i;
        leftSum += nums[i];
    }
    return -1; // no pivot index found
    
    }

};

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};

    return 0;
}