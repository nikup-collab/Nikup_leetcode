class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        int n=num;
        while(n !=0){
            if(n%2==0){
                n=n/2;
                count++;
            }
            else{
                n=n-1;
                count++;
            }
        }
                
        return count;
    }
};