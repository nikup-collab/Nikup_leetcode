class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // store ans;
        
        vector<vector<int>> answer;
        
        if(intervals.size()==0) return answer;
        
        //sort the intwrvals to linearly check the interval
        sort(intervals.begin(),intervals.end());
        
        //we take one vector to store and check
        vector<int> temp=intervals[0];
        
        for(auto it: intervals){
            
            if(it[0]<=temp[1]){
                temp[1]=max(it[1],temp[1]);
                
            }
            else{
                answer.push_back(temp);
                temp=it;
            }
        }
        answer.push_back(temp);
        
        return answer;
    }
};