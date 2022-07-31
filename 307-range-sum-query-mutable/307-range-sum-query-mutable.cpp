class NumArray {
public:
    vector<int>vect;
    
   vector<int>pf;
    int size=0;
    int sum=0;
    NumArray(vector<int>& nums) {
        vect=nums;
       // int sum=0;

        for(int i=0;i<vect.size();i++){
         sum+=vect[i];
        }
    }
    
    void update(int index, int val) {
        sum-=vect[index];
        
        
        vect[index]=val;
        sum+=vect[index];
    }
    
    int sumRange(int left, int right) {
        
        int s1=0, s2=0;
       for(int i=0;i<left;i++) s1+=vect[i];
        for(int i=right+1; i<vect.size();i++) s2+=vect[i];
        
        return sum-s1-s2;;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */