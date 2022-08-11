class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int>vect;
        
        for(int i=0;i<index.size();i++){
            
            if(vect.size()== index[i]){
                vect.push_back(nums[i]);
                
            }
            else{
                int n= vect.size();
                vect.push_back(INT_MIN);
                for(int j=n; j > index[i]; j-- ){
                    vect[j]=vect[j-1];
                }
                
                vect[index[i]]=nums[i];
            }
        }
        return vect;
    }
};