class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> matrix(r, vector<int>(c));
        int m=mat.size();
        int n=mat[0].size();
        int N =n*m;
        
        if(m*n  != r*c)
            return mat;
        
        for(int i=0;i<N; i++){
            matrix[i/c][i%c]=mat[i/n][i%n];
        }
        return matrix;
        
    }
};