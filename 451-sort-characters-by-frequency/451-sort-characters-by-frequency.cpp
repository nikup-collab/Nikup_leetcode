class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int> m;
        
        for(int i=0;i<s.size();i++){  //creating a hash map of frequency char
            m[s[i]]++;
        }
        
        
        vector<pair<int,char>> vect;  //  tc: 'tree' vect: { 1,t ; 1,r : 2,e}
        
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