class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
        
        //store frequency in map
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        
        //create vector pair
        vector<pair<int,int>> vect;
        
        for(auto v : m){
            vect.push_back({v.second,v.first});
        }
            sort(vect.begin(),vect.end(), greater<pair<int,int>>());
            
            vector<int> ans;
            
            for(auto v: vect){
                ans.push_back(v.second);
                k--;
                if(k==0) break;
            }
        return ans;
    }
};