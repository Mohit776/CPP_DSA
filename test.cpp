#include <iostream>
#include <stack>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    unordered_set<int> SSum;
    unordered_set<int> LSum;
    vector<int> ss;

    int a = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        a = a + nums[i];

        SSum.insert(a);
        ss.push_back(a);
    }

    a = 0;

    for (int i = nums.size() - 1; i > 0; i--)
    {
        a = a + nums[i];

        LSum.insert(a);
    }

    for (int i = 0; i < SSum.size(); i++)
        cout << SSum[i]
             << endl;

    cout << "======================" << endl;
    for (int i = 0; i < LSum.size(); i++)
        cout << LSum[i]
             << endl;

    cout << "======================" << endl;

    return 0;
}