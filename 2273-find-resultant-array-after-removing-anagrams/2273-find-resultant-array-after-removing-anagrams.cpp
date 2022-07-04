bool helper(string &s, string &t){
    if(s.size()!=t.size()) return false;
    
    unordered_map<int,int> mp;
    
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
        mp[t[i]]--;
    }
    
    for(auto v: mp){
        if(v.second!=0) return false;
    }
    return true;
    
}








class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int i=1;
        while(i<words.size()){
           if(helper(words[i],words[i-1])==true){
               
            words.erase(words.begin()+i); 
           }
            else{
                i++;
            }
           
        }
        return words;
    }
};