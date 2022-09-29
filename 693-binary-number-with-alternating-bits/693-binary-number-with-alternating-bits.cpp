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
        
        // for(int i=0;i<vect.size()-1;i++){
        //     if(vect[i]== vect[i+1]) return false;
        // }
        return true;
    }
};