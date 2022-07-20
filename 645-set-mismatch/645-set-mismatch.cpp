class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        unordered_map<int,int>m;
        
        for(int i=1; i<=nums.size();i++) m[i]=0;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        vector<int> vect(2,0);
        
        for(auto v: m){
            
            if(v.second==2) vect[0]=v.first;
            if(v.second==0) vect[1]=v.first;
        }
        
        return vect;
    }
    
};