class Solution {
public:
    bool checkIfPangram(string sentence) {
        int s_len=sentence.size();
        vector<int> freq(26,0);
        if(s_len<26) return false;
        
       
        
        for(int i=0;i<s_len;i++){
            freq[ int(sentence[i])- int('a')]++;
        }
        
        for(auto v : freq){
            if(v==0) return false;
        }
        return true;
    }
};