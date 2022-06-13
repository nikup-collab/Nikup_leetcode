#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mipr=INT_MAX;
        int profit=0;
        int ans=0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mipr){
                mipr=prices[i];
                
            }
            profit=prices[i]-mipr;
            if(profit>ans) ans=profit;
        }
        return ans;
    }
};