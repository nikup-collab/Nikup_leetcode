class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //chaining technique
        
        int cmax=0;
        int count=0;
        
        for(int i=0;i<arr.size(); i++){
            cmax=max(cmax,arr[i]);
            
            if(i==cmax)
                count++;
        }
        return count;
        
    }
};