bool help(string &s, string &s2){
    unordered_map<char,char>m;
    vector<char>vect;
    if(s.size()!=s2.size()) return false;
    
    for(int i=0;i<s.size();i++){
        
        if(m.find(s2[i])!=m.end()){
            if(m[s2[i]]!=s[i] )return false;
        }
        m[s2[i]]=s[i];
    }
    for(auto v: m){
        vect.push_back(v.second);
    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<vect.size()-1;i++){
        if(vect[i]==vect[i+1]) return false;
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