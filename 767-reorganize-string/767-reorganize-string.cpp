class Solution {
public:
    string reorganizeString(string s) {
        if(s.size()==1) return s;
        //frequency table
        
        unordered_map<char, int>freq_mpp;
        
        for(int i=0;i<s.size();i++) freq_mpp[s[i]]++;
        if(freq_mpp.size()==1) return "";
        
        priority_queue<pair<int,char>> maxh;
        
        for(auto v: freq_mpp){
            
            maxh.push({v.second, v.first});
            
        }
        s.clear();
        
        
        while(maxh.top().first>0){
            
            pair<int,char>p = maxh.top();
            maxh.pop();
            
            s += p.second;
            p.first--;
            
            pair<int,char> p2= maxh.top();
            maxh.pop();
            
            if(p2.first>0){
                s+= p2.second;
                p2.first--;
            }
            
            maxh.push(p);
            maxh.push(p2);
            
        }
        
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) return "";
            
        }
        return s;
    }
};