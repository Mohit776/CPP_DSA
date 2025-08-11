#include <iostream>
#include <stack>
#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

    deque<int>dq;
    vector<int>res;
        

        for (int i = 0; i < k; i++)
        {
            while (dq.size() >  0 && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);
  
            
        }
        res.push_back(dq.front());
        for (int i = k; i < nums.size(); i++)
        {     
            res.push_back(nums[dq.front()]);        
            while (dq.size() > 0 && dq.front() <= i-k)
            {
                dq.pop_front();
                
            }
            while (dq.size() > 0 && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);

            
            
            
        }
        res.push_back(dq.front());

     //   return res;

        for(int val : res){

cout << nums[val] <<  endl ;

        }

        
        
        

    }
};

int main()
{
    vector<int> arr = {1,3,-1,-3,5,3,6,7};

    Solution s;
    s.maxSlidingWindow(arr,3);

    return 0;
}