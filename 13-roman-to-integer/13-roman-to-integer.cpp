class Solution {
public:
    int romanToInt(string s) {
        
        // storing value of roman characters
        unordered_map<char, int> symbols =
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int res = symbols[s[s.size()-1]];
        
        for(int i=s.size()-2; i>=0;i--){
            
            if(symbols[s[i]] < symbols[s[i+1]]) res-= symbols[s[i]];
            else res+= symbols[s[i]];
        }
        return res;
    }
};