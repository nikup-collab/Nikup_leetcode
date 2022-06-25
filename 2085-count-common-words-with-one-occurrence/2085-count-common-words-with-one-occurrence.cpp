class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string, int> m;
        unordered_map<string, int> n;
        int count=0;
        for(int i=0;i<words1.size();i++) m[words1[i]]++;
        
        for(int i=0;i<words2.size();i++) n[words2[i]]++;
        
        for(int i=0;i<words1.size();i++){
            
            if(m[words1[i]]==1 && n[words1[i]]==1) count++;
        }
        return count;
    }
};