class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;           // every integer is right shift by inreasing and did "and" 1
        for(int i=0;i<32;i++){
            if(((n>>i) & 1) ==1)
                count++;
        }
       return count; 
    }
};