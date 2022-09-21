class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>answer;
        int n= matrix.size();
        int m = matrix[0].size();
        
        int direction =1;
        
        int top=0, left =0, right = m-1, bottom = n-1;
        
        while(top <= bottom and left <= right){
            
            if(direction ==1){
                
                for(int i= left; i<= right; i++) answer.push_back(matrix[top][i]);
                top++;
                direction = 2;
            }
              else if(direction==2)
            {
                for(int i=top;i<=bottom;i++) answer.push_back(matrix[i][right]);
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right;i>=left;i--) answer.push_back(matrix[bottom][i]);
                direction=4;
                bottom--;
            }
            
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) answer.push_back(matrix[i][left]);
                direction=1;
                left++;
            }
        }
        return answer;
    }
};