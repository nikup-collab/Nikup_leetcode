class Solution {
public:
    int uniquePaths(int m, int n){
         int x=m-1;
        int y=n-1;
        double ans=1;
        if(y<x){
            y=y^x;
            x=x^y;
            y=y^x;
        }
        for(int i=1;i<=x;i++){
            ans=(ans*(y+i))/i;
        }
        return ans;
    }
};