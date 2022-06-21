class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //sliding window approach
        int n= arr.size();
        //finding sum of first window
        int window=0;
        for(int i=0;i<k;i++){
            window+=arr[i];
            
        }
        
        int count;
        if(window/k>=threshold) count=1;
        else count=0;
        
        int start=0, end=k;
        while(end<n){
            window += arr[end]-arr[start];
            start++;
            end++;
            
            if(window/k>=threshold) count++;
        }

        
        return count;
    }
};