class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue<pair<int,pair<int,int>>> maxh;
        
        
        for(int i=0;i<nums1.size();i++){
            
            for(int j=0;j<nums2.size();j++){
                
                int sum= nums1[i]+nums2[j];
                if(maxh.size()<k)  maxh.push({sum, {nums1[i], nums2[j]}});
                else if(sum < maxh.top().first){
                    maxh.pop();
                    maxh.push({sum, {nums1[i], nums2[j]}});
                }
                else break;
            }
        }
        
        
        vector<vector<int>> answer;
        
        while(maxh.size()!=0){
            
            vector<int>vect;
            vect.push_back(maxh.top().second.first);
            vect.push_back(maxh.top().second.second);
            
            maxh.pop();
            answer.push_back(vect);
        }
        
       // reverse(answer.begin(), answer.end());
        
        return answer;
    }
};