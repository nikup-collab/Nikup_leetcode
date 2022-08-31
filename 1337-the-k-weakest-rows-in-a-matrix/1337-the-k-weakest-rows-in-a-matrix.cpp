class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>> maxh;
        
        for(int i=0;i<mat.size(); i++){
            
            int count=0;
            for(int j=0;j< mat[0].size();j++){
                
                if(mat[i][j]==1) count++;
            }
            maxh.push({count,i});
            
            if(maxh.size()>k) maxh.pop();
        }
        
        vector<int>vect;
        while(!maxh.empty()){
            vect.push_back(maxh.top().second);
            maxh.pop();
        }
            reverse(vect.begin(), vect.end());
        return vect;
            
        
    }
};