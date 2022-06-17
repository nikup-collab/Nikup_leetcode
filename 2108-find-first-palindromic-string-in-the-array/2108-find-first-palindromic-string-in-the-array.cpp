class Solution {
public:
    
    bool check(string &str){
        int s=0, l=str.size()-1;
        while(s<l){
            if(str[s]!=str[l]) return false;
            else{
                s++;
                l--;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string  str=words[i];
            if(check(str)) return words[i];
        }
        return "";
    }
};