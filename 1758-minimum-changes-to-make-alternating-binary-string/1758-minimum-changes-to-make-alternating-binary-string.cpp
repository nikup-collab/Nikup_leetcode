class Solution {
public:
    int minOperations(string s) {
        int odd1 = 0 , even0 = 0 ;
        int odd0 = 0  , even1 = 0 ;
        
        for(int i = 0 ; i < s.size(); ++i ){
            if(i%2 == 0){
                even0 += s[i] == '1' ;
                even1 += s[i] == '0' ;
            } else {
                odd0 += s[i] == '1' ;
                odd1 += s[i] == '0' ;
            }
        }
        return min(odd1+even0 , odd0 + even1) ;

    }
};