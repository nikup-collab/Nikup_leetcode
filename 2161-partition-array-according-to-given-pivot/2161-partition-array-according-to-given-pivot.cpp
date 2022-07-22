class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> vect1;
        vector<int> vect2;
        vector<int> vect3;
        vector<int> vect4;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<pivot) vect1.push_back(nums[i]);
            else if(nums[i]==pivot) vect4.push_back(nums[i]);
            else vect2.push_back(nums[i]);
        }
        
        for(int i=0;i<vect1.size();i++) vect3.push_back(vect1[i]);
        for(int i=0;i<vect4.size();i++) vect3.push_back(vect4[i]);
        for(int i=0;i<vect2.size();i++) vect3.push_back(vect2[i]);
        
        return vect3;
    }
};