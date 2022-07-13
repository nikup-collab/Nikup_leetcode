class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string s;
        if(str.size()==1) return str[0];
        for(int i=0;i<200;i++){
            
            for(int j=0;j<str.size()-1;j++){
                if(str[j].size()==0) return "";
                if(str[j][i]!=str[j+1][i]) 
                    return s;
            }
            s+=str[0][i];
            if(s==str[0]) return s;
            
            
        }
        return "";
        
    }
};