static bool cmp(pair<int,int>&p1, pair<int,int> &p2){
    
   return (p1.first==p2.first) ? p1.second > p2.second : p1.first < p2.first;
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int> freq_mpp;
        
        for(int i=0;i<nums.size();i++){
            
            freq_mpp[nums[i]]++;
        }
        
        vector<pair<int,int>> vect;
        
        for(auto it : freq_mpp){
            
            vect.push_back({it.second, it.first});
        }
            
            sort(vect.begin(), vect.end(), cmp);
        
        vector<int>answer;
        for(int i=0;i<vect.size();i++){
            
            while(vect[i].first >0){
                answer.push_back(vect[i].second);
                vect[i].first--;
            }
        }
       return answer; 
    }
};