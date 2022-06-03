class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=0;
        for(auto v : m){
            
            if(v.first == k){
                k++;
            }
            else return k;
        }
      return n;  
    }
};