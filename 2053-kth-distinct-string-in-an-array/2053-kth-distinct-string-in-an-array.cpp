class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<pair<int,string>>temp;
        
        unordered_map<string,int> m;
        
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]==1) temp.push_back({ (++count), arr[i]});
        }
        
        if(temp.size()<k) return "";
        else 
            return temp[k-1].second;
    }
};