bool feasible(int capacity, int n, vector<int> &weights,int days){
    int day=1;
    int total=0;
    for(int i=0;i<n;i++){
        total+=weights[i];
        if(total>capacity){
            total=weights[i];
            day+=1;
            if(day>days)
                return false;
        }
    }
    return true;
}




#include<bits/stdc++.h>
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s=weights.size();
        int left=*max_element(weights.begin(), weights.end());
        int right=0;
        for(int i=0;i<weights.size();i++){
            right+=weights[i];
        }
        while(left<right){
            int mid = left+(right-left)/2;
            if(feasible(mid,s, weights, days ))
                right=mid;
            else
                left=mid+1;
        }
        return left;
        
    }
};