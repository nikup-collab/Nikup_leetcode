int check(string &str, string &pref){
    
    for(int i=0;i<pref.size(); i++){
        
        if(pref[i]!=str[i]) return false;
    }
    return true;
}



class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
       int count=0; 
        for(int i=0;i<words.size();i++){
            
            if(check(words[i],pref)==true) count++;
        }
        return count;
    }
};