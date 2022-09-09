class Solution {
public:
    int minMaxGame(vector<int>& nums) {
       
        while(nums.size()!=1){
            
            vector<int>vect;
            int time=0;
            for(int i=0;i<nums.size()-1;i+=2){
                
                if(time%2==0){
                    
                    long long a = min(nums[i],nums[i+1]);
                    vect.push_back(a);
                    
                }
                else{
                    long long b = max(nums[i],nums[i+1]);
                    vect.push_back(b);
                }
                time++;
            }
            nums.clear();
            nums = vect;
        }
        return nums[0];
    }
};