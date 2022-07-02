class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        //map to store unique value
        map<pair<int,int> ,int> m;
        
        
        int i=0, j=1;
        //two pointer
        while(j<nums.size()){
            
            if(abs(nums[i]-nums[j])==k && i!=j){
                m[{nums[i],nums[j]}]++;
                
                j++;
            }
            
            else if(abs(nums[i]-nums[j])>k) i++;
            else j++;
        }
        int count=m.size();
        
        
        return count;
    }
};