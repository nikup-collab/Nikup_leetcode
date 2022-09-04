 bool cmp(pair<int,int>& a, pair<int,int>& b){
            return(a.first == b.first) ? a.second < b.second : a.first<b.first;
        };


class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        unordered_map<int,int>mpp;
//         storing the row no and the no of ones in each row row number is first and no of soldiers is second in pair
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            mpp.insert({i,count});
        }
       vector<pair<int,int>>vect;
        
        for(auto it : mpp){
            vect.push_back({it.second,it.first});
        }
        
        sort(vect.begin(), vect.end(),cmp);
        vector<int>v;
      
        for(int i=0;i<k;i++){
            v.push_back(vect[i].second);
        }
        return v;
    }
};