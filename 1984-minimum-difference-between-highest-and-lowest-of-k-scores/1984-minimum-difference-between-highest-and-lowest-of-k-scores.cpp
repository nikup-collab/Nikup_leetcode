int check(vector<int> &vect){
    int m=*max_element(vect.begin(),vect.end());
    int a=*min_element(vect.begin(),vect.end());
    int ans=m-a;
    
    return ans;
}




#include<bits/stdc++.h>
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        vector<int> vect;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        //first window
        
        for(int i=0;i<k;i++){
            vect.push_back(nums[i]);
        }
        
        int res=check(vect);
        
        int end=k;
        
        while(end<n){
            vect.erase(vect.begin());
            vect.push_back(nums[end]);
            int s=check(vect);
            
            res=min(res,s);
            end++;
        }
      return res;
    }
};