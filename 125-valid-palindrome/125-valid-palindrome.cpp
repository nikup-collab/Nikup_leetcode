class Solution {
public:
    bool isPalindrome(string s) {
        
        
        vector<char> ans;
        for(int i=0;i<s.size();i++){
            if(isalpha(int(s[i]))!=0 || isdigit(s[i])){
                char ch= s[i] & '_';
                ans.push_back(ch);
            }
        }
        
        
        int start=0, end= ans.size()-1;
        while(start<=end){
            if(ans[start]!=ans[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};