class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        vector<int>arr;
        vector<int>vect;
        
        while(start){
            arr.push_back(start%2);
            
            start = start>>1;
        }
        
         while(goal){
            vect.push_back(goal%2);
            
            goal = goal>>1;
        }
        int count=0;
        int n = min(arr.size(), vect.size());
        int i;
        for(i=0;i<n;i++){
            
            if(arr[i] != vect[i]) count++;
            }
        while(i<arr.size()){
            if(arr[i]==1) count++;
            i++;
        }
        while(i<vect.size()){
            if(vect[i]==1) count++;
            i++;
            
        }
        
            
        return count;
        
    }
};