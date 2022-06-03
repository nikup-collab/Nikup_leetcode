class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        long long left=0;
        long long right=x;
        while(left<right){
            long long   mid= left + (right-left)/2;
            if( mid*mid > x)
                right=mid;
            else
                left=mid+1;
            
        }
        return left-1;
        
    }
};