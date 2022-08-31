class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& nums) {
        
        if(nums.size()==1 || nums.size()==0)  return nums;
        
        //storing frequency
        unordered_map<int, int>freq_mpp;
        
        for(int i=0;i<nums.size(); i++) freq_mpp[nums[i]]++;
        
        priority_queue<pair<int,int>>maxh;
        
        for(auto v: freq_mpp)
            maxh.push({v.second, v.first});
        
        //clearing nums
        nums.clear();
        
        while(maxh.top().first > 0){
            
            pair<int,int>p = maxh.top();
            maxh.pop();
            
            nums.push_back(p.second);
            p.first--;
            
            pair<int,int> p2 = maxh.top();
            maxh.pop();
            
            if(p2.first >0){
                nums.push_back(p2.second);
                p2.first--;
            }
            
            maxh.push(p);
            maxh.push(p2);
        }
        return nums;
    }
};