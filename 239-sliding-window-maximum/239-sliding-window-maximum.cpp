

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        
       
        priority_queue<pair<int,int>>maxh;
                vector<int>vect;
        
        for(int i=0;i<k;i++) maxh.push({nums[i],i});
          // storing answer of first window
        vect.push_back(maxh.top().first);
        
        //for other window
        for(int j= k; j<nums.size() ;j++){
            
            maxh.push({nums[j],j});
            
            while(!(maxh.top().second > j-k))
               maxh.pop();
            
            vect.push_back(maxh.top().first);
        }
            
             
           
        
        return vect;
        
    }
    
};