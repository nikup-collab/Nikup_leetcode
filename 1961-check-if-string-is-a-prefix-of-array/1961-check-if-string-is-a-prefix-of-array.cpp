class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string str;
        
        for(int i=0;i<words.size();i++){
            str=str+words[i];
             if(str==s) return true;
            else continue;
        }
        return false;
    }
};