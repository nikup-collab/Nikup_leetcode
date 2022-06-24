class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        

        
        for(int i=0;i<n;i++){
         vector<int> vect(n+1,0);
            for(int j=0;j<n;j++){
                if(vect[matrix[i][j]] != 0) return false; // element already present before 
               else
                   vect[matrix[i][j]]=1;
            
            }
        }
                for(int i=0;i<n;i++){
            vector<int> vect(n+1,0);
            for(int j=0;j<n;j++){
                if(vect[matrix[j][i]]!=0){
                    return false;
                }else{
                    vect[matrix[j][i]] = 1;
                }
            }
        }
        return true;
    }
};