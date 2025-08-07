#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int NextGreater(vector<int>arr){

    stack<int>s;
    vector<int> NG(arr.size(),0);
    int n = arr.size();


    for (int i = n-1; i >= 0; i--)
    {

        while (s.size()>0 && s.top() <= arr[i] )
        {
            s.pop();
  
        }
        if(s.empty()){
            return NG[i] = -1;
        }else return NG[i] = s.top();
        
    s.push(arr[i]);
      
    }

    for(int val : NG ){
        cout << val << endl;
    }
  




};

int main (){

    vector<int> arr = {6,8,0,1,3};
stack<int>s;
    vector<int> ans(arr.size(),0);
    int n = arr.size();


    for (int i = n-1; i >= 0; i--)
    {

        while (s.size()>0 && s.top() <= arr[i] )
        {
            s.pop();
  
        }
        if(s.empty()){
             ans[i] = -1;
        }else ans[i] = s.top();
        
    s.push(arr[i]);
      
    }

    for(int val : ans ){
        cout << val << endl;
    }
    
    return 0;
}