class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        stack<int>vect;
        
        while(n){
            if(!vect.empty()){
                if(vect.top() == n%2) return false;
            }
             vect.push(n%2);
            n=n>>1;
        }
        
        
        return true;
    }
};