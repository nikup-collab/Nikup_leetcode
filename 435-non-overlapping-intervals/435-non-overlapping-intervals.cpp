bool cmp(const vector<int>& v1, const vector<int> &v2){
     return v1[1] < v2[1];
}

//greedy approach

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        
         sort(intervals.begin(), intervals.end(), cmp);
            
    

        int count=1;
        int endswith = intervals[0][1];
        
        for(int i=1;i< n;i++){
            
            if(intervals[i][0]>=endswith){
                count++;
                endswith = intervals[i][1];
            }
        }
        
        return n-count;
    }
};