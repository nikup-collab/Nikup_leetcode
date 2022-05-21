//function to reverse array

void reversearray(vector<int> &nums, int i, int j){
    int li=i;
    int ri=j;
    
    while(li<ri){
        int temp=nums[li];
        nums[li]=nums[ri];
        nums[ri]=temp;
        
        li++;
        ri--;
        
    }
}




class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        //part1
        
        reversearray(nums, 0, nums.size()-k-1);
        
        
        
        //part2
        reversearray(nums, nums.size()-k, nums.size()-1);
        
        
        
        //part1+par2
        reversearray(nums, 0, nums.size()-1);
        
        
    }
};