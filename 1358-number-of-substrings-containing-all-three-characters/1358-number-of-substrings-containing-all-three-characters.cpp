class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int i=0, j=0, n=s.size(), counter=0;
        int ans=0;
        unordered_map<char,int> m;
        
        while(j<n){
            
            m[s[j]]++;
            
            
        
            while(m.size()==3){
                ans += n-j;
                
                
                m[s[i]]--;
                if(m[s[i]]==0) m.erase(s[i]);
                
                i++;
            }
            j++;
            
        }
        
        return ans;
    }
};