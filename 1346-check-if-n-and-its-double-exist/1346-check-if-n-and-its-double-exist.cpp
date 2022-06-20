class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> q;
        for(auto x : arr){
            q[x]++;
        }
        
        for(int i = 0;i<arr.size();i++){
            //searching for m so that n = 2*m;
            int n = 2*arr[i];
            if(n == 0){ 
                if(q[n]>1)
                    return true;
            }else{
                if( q.find(n) != q.end()){
                    return true;
                }
            }
        }
        
        return false;
    }
};
