class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        int n=word.size();
        
        for(int i=0;i<word.size(); i++){
            if(isupper(int(word[i]))!=0) count++;
        }
        
        if(count==n || count==0) return true;
        
        if(count==1 & isupper(int(word[0]))!=0) return true;
        else
            return false;
    }
};