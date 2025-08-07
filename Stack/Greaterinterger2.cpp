#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>

using namespace std;

int greater(vector<int>nums1 , vector<int>nums2){

    unordered_map<int,int>m;



     stack<int> s;
    vector<int> ans;
    int n = nums2.size();

    for (int i = n - 1; i >= 0; i--)
    {

        while (s.size() > 0 && s.top() <= nums2[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            m[nums2[i]] = -1;
        }
        else
            {m[nums2[i]] = s.top();}

        s.push(nums2[i]);
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        ans.push_back(m[nums1[i]]);
    }


    
    


}

int main()
{

    vector<int> arr = {6,8,0,1,3};

    return 0;
}