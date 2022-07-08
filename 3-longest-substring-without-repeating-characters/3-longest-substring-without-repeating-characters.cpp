class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //frequency table
        unordered_map<char,int> m;
        
        int i=0, j=0, n=s.size();
        int ans=0;
        while(j<n){
            
            char l_ch= s[j];
            
            m[l_ch]++;
            
            if(m[l_ch]>1){
                
                ans=max(ans,j-i);
                while(m[l_ch]>1){
                    m[s[i]]--;
                    i++;
                }
                
            }
            j++;
        }
        return max(ans,j-i);
        
    }
};