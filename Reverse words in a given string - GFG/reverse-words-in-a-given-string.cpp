// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

void helper(string &S,int j,int k){
    k--;
    while(j<k){
        swap(S[j],S[k]);
        j++;
        k--;
    }
     
}
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n=S.size();
        reverse(S.begin(),S.end());
        int j=0;
        for(int i=0;i<=S.size();i++){
            if(S[i]=='.' || i==n){
                helper(S,j,i);
                j=i+1;
            }
        }
        return S;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends