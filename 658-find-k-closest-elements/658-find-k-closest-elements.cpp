class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int low =0, high = arr.size()-k, mid=0;
        
        while(low < high){
            
             mid = low + (high- low)/2;
            
            if( x-arr[mid] <= arr[mid+k]-x){
                high = mid;
            }
            else{
                low = mid +1;
            }
        }
        
        vector<int>answer;
        
        for(int i=0;i<k;i++){
            answer.push_back(arr[i+low]);
            
            if(answer.size()==k) break;
        }
        return answer;
    }
};