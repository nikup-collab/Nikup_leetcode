class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int sum=0;
        for(auto pr: m){
            if(pr.second == 1)
                sum=sum+pr.first;
        }
        return sum;
    }
};