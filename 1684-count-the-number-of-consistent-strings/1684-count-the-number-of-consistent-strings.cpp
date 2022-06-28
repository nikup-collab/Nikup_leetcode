bool helper(string &s, unordered_map<char,int> &m){
    for(int i=0;i<s.size();i++){
        
        if(m.find(s[i])==m.end()) return false;
    }
    return true;
}









class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> m;
        int count=0;
        for(int i=0;i<allowed.size();i++) m[allowed[i]]++;
        
        for(int i=0;i<words.size();i++){
            if(helper(words[i],m)==true) count++;
        }
        
        return count;
    }
};