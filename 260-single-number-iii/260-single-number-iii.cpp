class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        
        for(int i=0; i<nums.size();i++) m[nums[i]]++;
        
        vector<int> ans;
        
        for(auto v: m){
            if(v.second==1) ans.push_back(v.first);
        }
        return ans;
    }
};