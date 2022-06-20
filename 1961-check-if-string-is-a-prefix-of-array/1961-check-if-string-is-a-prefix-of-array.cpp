class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string str;
        
        //i just create new string and check whether they are equal or not.
        //transverse the complete array.
        
        for(int i=0;i<words.size();i++){
            str=str+words[i];
             if(str==s) return true;
            else continue;
        }
        return false;
    }
};