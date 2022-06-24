class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int> m;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        
        vector<pair<int,char>> vect;
        
        for(auto v : m){
            vect.push_back({ v.second,v.first});
        }
        
        sort(vect.begin(),vect.end(),greater<pair<int,char>>());
        
        string str;
        for(auto v: vect){
            string temp(v.first,v.second);
            str=str+ temp;
        }
        
       return str; 
    }
};