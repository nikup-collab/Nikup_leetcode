bool helper(string &b , string &c){
    
    unordered_map<char,char> m;
    
    for(int i=0;i<b.size();i++){
        
        if(m.find(b[i])!=m.end()){
            if(m[b[i]]!=c[i]) return false;
        }
        else m[b[i]]=c[i];
    }
    return true;
}





class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        return helper(s,t) && helper(t,s);

    }
};