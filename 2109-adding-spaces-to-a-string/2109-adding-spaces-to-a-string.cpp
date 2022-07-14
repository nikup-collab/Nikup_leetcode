class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        string str;
        int i=0, j=0;
        
        while(i<s.size() && j<=spaces.size()){
            
            if(j<spaces.size() && i==spaces[j]){
                
                str+= ' ';
                j++;
            }
            
            str+=s[i];
            i++;
        }
        return str;
        
    }
};