class Solution {
public:
    int maxPower(string s) {
        int ans=0, currmax=1;
        
        for( int i=1; i<s.size(); i++){
            
            if(s[i]==s[i-1]) currmax++;
            else{
                ans= max(currmax,ans);
                currmax=1;
            }
        }
        return max(ans,currmax);
        
    }
};