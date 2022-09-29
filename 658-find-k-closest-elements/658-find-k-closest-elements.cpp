class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        //using priority queue
        priority_queue<pair<int,int>>maxh;
        
        for(int i=0;i<arr.size();i++){
            int a= arr[i];
            int dist = abs(arr[i]-x);
            
            if(maxh.size()<k){
                
             maxh.push({dist,a});
            }
            
            else if(maxh.size()>=k) {
                if(maxh.top().first > dist){
                    maxh.pop();
                    maxh.push({dist,a});
                }
            }
        }
        
        vector<int>answer;
        
        while(!maxh.empty()){
            answer.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(answer.begin(),answer.end());
        
        return answer;
    }
};