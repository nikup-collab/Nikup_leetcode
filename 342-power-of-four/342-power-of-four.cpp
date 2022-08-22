class Solution {
public:
    bool isPowerOfFour(int n) {
        
        for(int i=0;i<=15; i++){
            int res= pow(4,i);
            
            if(res==n) return true;
        }
        return false;
    }
};