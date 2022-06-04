bool condition(int mid, vector<int> &position, int k){
    int lastposition = -1;
    
    for(int i=0;i<position.size();i++){
        if((position[i]-lastposition)>=mid || lastposition ==-1){
            lastposition=position[i];
            k--;
        }
        if(k==0) break;
    }
    if(k==0) return true;
    else return false;
    
}





#include<bits/stdc++.h>
class Solution {
public:
    int maxDistance(vector<int>& position, int m){
        int max= *max_element(position.begin(), position.end());
        
        int left =0, right= max;
        sort(position.begin(),position.end());
        
        //t t t t f f f 
        while(right - left >1){
            int mid = left + (right-left)/2;
            
            if(condition(mid, position, m))
              left=mid;
            else 
            right=mid-1;
        }
        if(condition(right,position,m)) return right;
        else
            return left;
        
        
    }
};