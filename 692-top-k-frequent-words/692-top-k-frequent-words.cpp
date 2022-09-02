class Solution {
    
   static  bool cmp(pair<string,int> v1, pair<string,int> v2){
        
        if(v1.second> v2.second || (v1.second==v2.second and v1.first < v2.first))
            return true;
        
        return false;
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>freq_mpp;
        
        for(int i=0;i<words.size();i++) freq_mpp[words[i]]++;
        
        vector<pair<string,int>>vect;
        
        for(auto v: freq_mpp){
            vect.push_back({v.first, v.second});
        }
        
        sort(vect.begin(), vect.end(), cmp);
        
        vector<string>answer;
        
        for(int i=0;i<k;i++){
            answer.push_back(vect[i].first);
        }
        
        return answer;
    }
};