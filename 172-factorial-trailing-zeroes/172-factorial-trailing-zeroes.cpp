class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        for(int i=5 ; n/i>0 ;i=i*5){
            ans=ans+ floor(n/i);
        }
       return ans; 
    }
};