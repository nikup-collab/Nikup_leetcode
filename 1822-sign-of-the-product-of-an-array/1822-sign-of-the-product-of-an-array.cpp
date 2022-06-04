int signFunc(long long int n){
    if(n<0) return -1;
    else if(n>0) return 1;
    else return 0;
}





class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int pr=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                nums[i]=1;
                pr=pr*nums[i];
            }
            else if(nums[i]<0){
                nums[i]=-1;
                pr=pr*nums[i];
            }
            else
            pr=pr*nums[i];
        }
        return signFunc(pr);
        
    }
};