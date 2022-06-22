int help(vector<int> &check){
    sort(check.begin(),check.end());
    
    int d= check[1]-check[0];
    
    for(int i=0;i<check.size()-1;i++){
        if(check[i+1]-check[i]!=d) return 0;
    }
    return 1;
}





#include<bits/stdc++.h>
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        //to store array 
        vector<int> check;
        
        //to store answer
        vector<bool> vect;
        int n=l.size();
        for(int i=0;i<n;i++){
            
        
            for(int j=l[i];j<=r[i];j++){
                check.push_back(nums[j]);
            }
            
            if(help(check)==1) vect.push_back(true);
            else vect.push_back(false);
            
            check.clear();
           
            
        }
       return vect; 
        
    }
};