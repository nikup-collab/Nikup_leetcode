class Solution {
public:
    bool isUgly(int n) {
        
        vector<int> arr={2,3,5};
        if(n<=0) return false;
        for(int i=0;i< 3; i++){
            
            while(n%arr[i]==0){
                n=n/arr[i];
            }
        }
        if(n==1) return true;
        else
            return false;
        
    }
};