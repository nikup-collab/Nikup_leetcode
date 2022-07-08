bool helper(string &s, string &t){
    
    if(s.size()!=t.size()) return false;
    unordered_map<char,char>m;
    for(int i=0;i<s.size();i++){
        if(m.count(t[i])==1){
            if(m[t[i]] != s[i]) return false;
        } 

        
        m[t[i]]=s[i];
        
    }
    vector<int> vect(26,0);
    for(auto v:m){
        vect[v.second-'a']++;
    }
    
    for(auto v:vect){
        
        if(v>1) return false;
    }
    return true;
}






class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        
        for(int i=0;i<words.size();i++){
            
            if(helper(words[i],pattern)==true) ans.push_back(words[i]);
        }
        return ans;
    }
};