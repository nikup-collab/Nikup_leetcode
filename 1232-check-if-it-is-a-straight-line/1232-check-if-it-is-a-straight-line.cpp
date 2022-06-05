class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dY = coordinates[1][1] - coordinates[0][1];
	int dX = coordinates[1][0] - coordinates[0][0]; 
        
        
        for(int i=2;i<coordinates.size();i++){
             int m=coordinates[i][0]-coordinates[0][0];
             int n=coordinates[i][1]-coordinates[0][1];
             
             if(dY * m != dX*n) return false;
        }
      return true;  
    }
};