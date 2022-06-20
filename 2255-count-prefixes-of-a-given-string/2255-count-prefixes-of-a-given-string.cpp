bool check(string st, string s){
    for(int i=0;i<st.size();i++){
        if(st[i]!=s[i]) return false;
    }
    return true;
}



class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int count=0;
        for(int i=0;i<words.size();i++){
            if(check(words[i],s)==true) count++;
        }
        return count;
    }
};