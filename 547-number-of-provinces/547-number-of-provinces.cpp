class Solution {
public:
     void dfs(int i, vector<vector<int>> &isConnected, vector<int> &ves){
         
         ves[i]=1;
         
         for(int j=0; j<isConnected[i].size();j++){
             
             if(i!=j and isConnected[j][i]==1 and  ves[j]==0){
                 dfs(j, isConnected, ves);
             }
         }
     }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        // find the vertices of graphj
        
        int v = isConnected.size();
        int count=0;
        
        // visited array
        vector<int> ves(v,0);
        
        for(int i=0;i<v;i++){
            
            if(ves[i]==0){
                count++;
                dfs(i, isConnected, ves);
            }
        }
        return count;
    }
};