class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        unordered_map<int,set<int>> freq_mpp;
        
        for(int i=0;i<matrix.size();i++){
            
            for(int j=0; j< matrix[0].size();j++){
                
                freq_mpp[i-j].insert(matrix[i][j]);
            }
        }
        for(auto it : freq_mpp){
            
            if(it.second.size() !=1) return false;
        }
        return true;
    }
};