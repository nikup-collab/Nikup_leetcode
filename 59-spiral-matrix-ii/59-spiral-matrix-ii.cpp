class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> answer(n, vector<int>(n,0));
        int left =0, top =0, bottom = n-1, right = n-1;
        
        int direction =1;
        int val =1;
        
        while( top <= bottom and left <= right){
            
            if(direction ==1){
                
                for(int i= left; i<=right;i++){
                    answer[top][i] =val++;
                }
                top++;
                direction =2;
            }
            else if(direction == 2){
                
                for(int i= top ; i<=bottom;i++){
                    answer[i][right]=val++;
                    
                }
                right--;
                direction=3;
            }
            else if(direction == 3){
                for(int i = right; i>=left;i--){
                    answer[bottom][i]=val++;
                }
                bottom--;
                direction=4;
            }
            else if(direction == 4){
                
                for(int i=bottom;i>=top;i--){
                    answer[i][left] =val++;
                }
                left++;
                direction =1;
            }
        }
        return answer;
    }
};