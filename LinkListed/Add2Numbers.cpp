#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

class Solution {

  struct ListNode {
     int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
          ListNode* temp2 = l2;
         
          ListNode* ans = new ListNode(); 


        while (temp1->next != nullptr)
        {
            int v1 = temp1-> val;
            int v2 = temp2-> val;

            int v3 = v1+v2;
        
            


            temp1->next;
            temp2->next;
        }
        
        
    }
};

int main()
{
    vector<int> arr = {6,8,0,1,3};


    return 0;
}
