bool help(string &s, string &s2){
    unordered_map<char,char>m;
    unordered_map<char,char>m2;
    //vector<char>vect;
    if(s.size()!=s2.size()) return false;
    
    for(int i=0;i<s.size();i++){
        
        if(m.find(s2[i])!=m.end()){
            if(m[s2[i]]!=s[i] )return false;
        }
        if(m2.find(s[i])!=m2.end()){
            if(m2[s[i]]!=s2[i]) return false;
        }
        m[s2[i]]=s[i];
        m2[s[i]]=s2[i];
    }

    return true;
     
}






class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       
        //for(int i=0;i<pattern.size();i++) m[pattern[i]]++;
        
        
        vector<string> ans;
        
        for(int i=0;i<words.size();i++){
            if(help(words[i],pattern)==true) ans.push_back(words[i]);
        }
        
        return ans;
    }
};