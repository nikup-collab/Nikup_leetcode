bool count(string &s,string &pref){
    for(int i=0;i<pref.size();i++){
        if(pref[i]!=s[i]) return false;
    }
    return true;
}




class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            if(count(words[i],pref) == true) ans++;
        }
        return ans;
    }
};