class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){              //loop run row time of matrix
            int start=0, end=n-1;
            while(start<=end){                //binary search algorithm to find target
                int mid=(start+end)/2;
                if(matrix[i][mid]==target)
                    return true;
                else if(matrix[i][mid]>target)
                    end=mid-1;
                else
                    start=mid+1;
            
            }
        }
        return false;
        
    }
};