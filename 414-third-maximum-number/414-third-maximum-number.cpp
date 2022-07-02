class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size(); i++) m[nums[i]]++;
        
        vector<pair<int, int> > vect;
        
        for(auto v: m ){
            vect.push_back({v.first,v.second});
        }
        
        sort(vect.begin(), vect.end());
       int n=vect.size();
        if(vect.size()>2) return vect[n-3].first;
        else if(n==2) return vect[1].first;
        else return vect[0].first;
    }
};