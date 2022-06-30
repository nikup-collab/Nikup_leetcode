class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1; i*i<num+1; i++){
            if(num%i==0){
                sum+=i+num/i;
                
                if(i==num/i) sum=sum-i;
            }
        }
        sum=sum-num;
        if(sum==num) return true;
        else
            return false;
    }
};