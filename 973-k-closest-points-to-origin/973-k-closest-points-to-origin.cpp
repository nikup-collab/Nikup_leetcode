#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<pair<int, pair<int,int>>>temp;
        
        for(auto it : points){
            int dist = it[0]*it[0] + it[1]*it[1];
            temp.push_back({dist, {it[0], it[1]}});
        }
        
        sort(temp.begin(),temp.end());
        
        vector<vector<int>> ans;
        
        for(int i=0; i<k;i++ ){
            ans.push_back(vector<int>());
            ans[i].push_back(temp[i].second.first);
            ans[i].push_back(temp[i].second.second);
        }
        return ans;
    }
};