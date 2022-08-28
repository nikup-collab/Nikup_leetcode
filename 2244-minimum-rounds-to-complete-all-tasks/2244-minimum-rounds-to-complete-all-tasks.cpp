class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=0;
        unordered_map<int,int> freq_mpp;
        
        for(int i=0;i<tasks.size();i++) freq_mpp[tasks[i]]++;
        
        
        for(auto v : freq_mpp){
            
            int check= v.second;
            
            while(check!=0){
                
                if(check>=3 and check !=4) {
                    check=check-3;
                    count++;
                }
                
                if(check==2 || check==4){
                    
                 check=check-2;
                    count++;
                }
                
                if(check <2 and check!=0) return -1;
            }
        }
        return count;
    }
};