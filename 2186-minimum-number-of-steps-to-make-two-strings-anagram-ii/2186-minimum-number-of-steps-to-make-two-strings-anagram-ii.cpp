class Solution {
public:
    int minSteps(string s, string t) {
        
        int s_len=s.size();
        int t_len=t.size();
        
        unordered_map<char,int> freq;
        
        for(int i=0;i<s_len;i++){
            freq[s[i]]++;
        }
        int count=0;
        for(int i=0;i<t_len;i++){
            if(freq.find(t[i])!= freq.end() && freq[t[i]]>0){
                count++;
                freq[t[i]]--;
            }
        }
        return (t_len-count)+(s_len-count);
    }
};