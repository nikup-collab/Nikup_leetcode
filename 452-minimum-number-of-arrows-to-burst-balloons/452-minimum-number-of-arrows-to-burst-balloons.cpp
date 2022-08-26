//sort column wise
bool cmp(const vector<int> &v1, vector<int> &v2){
    return v1[1]<v2[1];
    
}





class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end(), cmp);
        int count=1;
        int endwith = points[0][1];
        
        for(int i=1; i<points.size();i++){
            
            if(points[i][0] > endwith){
                count++;
                endwith = points[i][1];
            }
        }
        return count;
    }
};