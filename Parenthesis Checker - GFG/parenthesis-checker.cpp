// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> stack;
        int i=0;
        while(i<x.size()){
            
            if(x[i]=='{' || x[i]=='(' || x[i]=='[') stack.push(x[i]);
            else{
                if(stack.empty()) return false;
                else{
                    if(stack.top()=='{' && x[i]=='}' || stack.top()=='[' && x[i]==']'|| stack.top()=='(' && x[i]==')') stack.pop();
                    else return false;
                    
                }
            }
            i++;
        }
        
        return stack.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends