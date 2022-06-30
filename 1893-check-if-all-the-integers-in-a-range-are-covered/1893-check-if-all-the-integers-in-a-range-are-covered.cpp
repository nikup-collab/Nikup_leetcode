class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_map<int,int> m;
        int n=ranges.size();
        
        
        for(int i=0;i<n ; i++){
            for(int j= ranges[i][0]; j<=ranges[i][1]; j++) m [j]++;
        }
        
        for(int i=left; i<=right; i++){
            if(m.find(i)==m.end()) return false;
        }
        return true;
    }
};