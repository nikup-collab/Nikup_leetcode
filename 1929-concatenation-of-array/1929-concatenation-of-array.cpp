#include<vector>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vect;
        int j=0;
        for(int i=0;i<(2*nums.size());i++){
            vect.insert(vect.begin()+i,nums[j]);
            j++;
            if(i+1==nums.size())  j=0;
        }
            
        
        
            
        
        return vect;
    }
};