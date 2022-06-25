class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        
        vector<pair<int,int>>temp;
        
        for(int i=0;i<arr.size();i++){
            int dist = abs(x-arr[i]);
            temp.push_back({dist, arr[i]});
        }
        
        
        sort(temp.begin(),temp.end());
        
        vector<int> ans;
        
        for(int i=0;i<k;i++){
            
            ans.push_back(temp[i].second);
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};