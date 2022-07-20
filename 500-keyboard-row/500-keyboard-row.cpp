bool help(string &s, unordered_map<char,int> &m1){
    
    for(int i=0;i<s.size();i++){
        if(m1.find(tolower(s[i]))==m1.end()) return false;
    }
    return true;
    
    }

bool help2(string &s, unordered_map<char,int> &m2){
    
    for(int i=0;i<s.size();i++){
        if(m2.find(tolower(s[i]))==m2.end()) return false;
    }
    return true;
    
    }

bool help3(string &s, unordered_map<char,int> &m3){
    
    for(int i=0;i<s.size();i++){
        if(m3.find(tolower(s[i]))==m3.end()) return false;
    }
    return true;
    
    }









class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        unordered_map<char,int> m3;
        
        for(int i=0;i<s1.size();i++) m1[s1[i]]++;
         for(int i=0;i<s2.size();i++) m2[s2[i]]++;
         for(int i=0;i<s3.size();i++) m3[s3[i]]++;
        
        //answer
        vector<string> vect;
        
        for(int i=0;i<words.size();i++){
            
            if(help(words[i], m1)==true || help2(words[i],m2)==true || help3(words[i],m3)==true) vect.push_back(words[i]);
        }
        return vect;
    }
};