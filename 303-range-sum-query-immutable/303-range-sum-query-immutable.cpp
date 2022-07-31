class NumArray {
public:
    vector<int>vect;
    int sum=0;
    NumArray(vector<int>& nums) {
        vect=nums;
        for(int i=0;i<vect.size();i++){
            sum+=vect[i];
        }
        
    }
    
    int sumRange(int left, int right) {
        int s1=0, r1=0;
        for(int i=0;i<left;i++) s1+=vect[i];
        for(int i=right+1;i<vect.size();i++) r1+=vect[i];
        
        return sum-s1-r1;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */