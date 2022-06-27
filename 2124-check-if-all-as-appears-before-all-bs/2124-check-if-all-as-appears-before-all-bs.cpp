class Solution {
public:
    bool checkString(string s) {
        
        int start=0, end= s.size()-1;
        
        while(start<=end){
            if(s[start]=='b'){
                if(s[end]=='a') return false;
            }
            if(s[start]=='a') start++;
            if(s[end]=='b') end--;
        }
        return true;
    }
};