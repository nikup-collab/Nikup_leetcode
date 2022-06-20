class Solution {
public:
    string truncateSentence(string s, int k) {
      string e;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==32) count++;
            if(count==k) break;
            e=e+s[i];
            
            
        }
        return e;
    }
};