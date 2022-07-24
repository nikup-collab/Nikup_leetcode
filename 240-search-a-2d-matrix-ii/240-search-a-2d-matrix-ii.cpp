class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++){
            
            int lo=0, hi=n-1;
            while(lo<=hi){
                
                int mid=lo+(hi-lo)/2;
                if(matrix[i][mid]==target) return true;
                
                if(matrix[i][mid]>target) hi=mid-1;
                else lo=mid+1;
            }
        }
        return false;
    }
};