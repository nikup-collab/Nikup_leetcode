class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        
        for(auto v: m){
            minh.push({v.second, v.first});
            
            if(minh.size()>k) minh.pop();
        }
        
        vector<int>vect;
        
        while(minh.size()>0){
            vect.push_back(minh.top().second);
            minh.pop();
        }
        reverse(vect.begin(), vect.end());
        return vect;
        
    }
};