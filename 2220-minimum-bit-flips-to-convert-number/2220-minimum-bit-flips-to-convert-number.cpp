class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int c = start^goal;
        int count=0;
        while(c){
             if(c%2==1) count++;
            
            c=c>>1;
        }
        return count;
    }
};