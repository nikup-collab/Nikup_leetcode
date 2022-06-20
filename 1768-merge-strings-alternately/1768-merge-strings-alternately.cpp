class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        
        int start=0, end=0;
        
        while(word1[start]!='\0' || word2[end]!='\0'){
             if(word1[start]!='\0'){
                 s+=word1[start];
                 start++;
             }
            
            if(word2[end]!='\0'){
                s+=word2[end];
                end++;
            }
            
        }
        return s;
    }
};