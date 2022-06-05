class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> vect;
        int start=0;
        int end=n;
        while(end<2*n){
          vect.push_back(nums[start]);
            vect.push_back(nums[end]);
            start++;
            end++;
            
        }
       return vect; 
    }
};