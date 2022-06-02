class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pr=1;
        int rem;
        while(n!=0){
            rem=n%10;
            sum=sum+rem;
            pr=pr*rem;
            n=n/10;
            
        }
        int res=pr-sum;
        return res;
        
    }
};