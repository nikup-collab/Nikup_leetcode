class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        vector<int>vect;
        
        while(n){
             vect.push_back(n%2);
            n=n>>1;
        }
        
        for(int i=0;i<vect.size()-1;i++){
            if(vect[i]== vect[i+1]) return false;
        }
        return true;
    }
};