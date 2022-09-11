class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
        vector<int>hsh(1000015,0);
        
        for(int i=0;i<intervals.size();i++){
            
           int start = intervals[i][0];
            int end  = intervals[i][1];
            
            hsh[start] +=1;
            hsh[end+1] -= 1;
        }
        
        int ans = -1;
        
        for(int i=1;i<1000015;i++){
            
            hsh[i]+= hsh[i-1];
            ans = max(ans, hsh[i]);
        }
        
        return ans;
    }
};