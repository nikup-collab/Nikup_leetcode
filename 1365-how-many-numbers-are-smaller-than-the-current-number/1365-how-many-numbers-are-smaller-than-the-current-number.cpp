class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vect;
        for(int i=0;i<nums.size();i++){
           int count=0; 
            for(int j=0;j<nums.size();j++){
                
                if(j==i) continue;
                
                if(nums[j]<nums[i]) count++;
            }
            vect.push_back(count);
        }
        return vect;
    }
};