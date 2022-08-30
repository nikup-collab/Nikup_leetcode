class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        //max heap to calculate distace
        
        priority_queue<pair<int, int>> maxh;
        
        for(int i=0;i<points.size();i++){
            
            if(points[i][0] == x || points[i][1] == y){
                
                int a= points[i][0];
                int b= points[i][1];
                
                int distance = abs(a-x) + abs(b-y);
                
                
                if(maxh.size()==0) maxh.push({ distance,i});
                else{
                    if(distance < maxh.top().first){
                      maxh.pop();  
                     maxh.push({distance, i});
                    } 
                }
            }
        }
        
        if(maxh.size()==0) return -1;
        
        return maxh.top().second;
    }
};