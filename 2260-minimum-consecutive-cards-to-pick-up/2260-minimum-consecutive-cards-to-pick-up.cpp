class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        //sliding window approach
        unordered_map<int,int> m;
        
        int i=0,j=0, ans=INT_MAX;
        
        while(j<cards.size()){
            
            m[cards[j]]++;
            
            if(m[cards[j]]>1){ //if we get the pair
        
                
                
                while(m[cards[j]]>1){
                    
                    m[cards[i]]--;
                    i++;
                }
                ans=min(ans, j-i+2);
            }
            j++;
        }
        return (ans!=INT_MAX) ? ans : -1;
        
    }
};