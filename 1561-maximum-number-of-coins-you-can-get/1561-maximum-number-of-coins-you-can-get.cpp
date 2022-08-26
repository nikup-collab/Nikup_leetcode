#include<bits/stdc++.h>
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        //greeady approach
        sort(piles.begin(), piles.end(), greater<int>());
        int me=0;
        
        int i=1, j=piles.size()-1;
         while(i<j){
             
             me+= piles[i];
             
             i+=2;
             j--;
         }
        
        return me;
        
    }
};