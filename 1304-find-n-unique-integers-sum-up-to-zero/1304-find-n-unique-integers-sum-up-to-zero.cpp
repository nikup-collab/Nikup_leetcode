class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vect;
        

            
            for(int i=1; i<=n/2; i++){
                vect.push_back(i);
                int num=0-i;
                vect.push_back(num);
            }
        if(n%2!=0)  vect.push_back(0);
        
        return vect;
    }
};