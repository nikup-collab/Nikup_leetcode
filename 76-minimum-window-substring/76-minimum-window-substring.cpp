class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        
        //frequency table
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        
        //sliding window
        long long start=0, end=0, counter=mp.size(), len=INT_MAX;
        string ans="";
        //rollong on string
        while(end<s.size()){
           // str= str+ s[end];
            
            char end_ch= s[end];
            
            if(mp.find(end_ch)!=mp.end()){
                mp[end_ch]--;
                if(mp[end_ch]==0) counter--;
            }
            end++;
            
            while(counter==0){
                
                if(end-start<len){
                    len=end-start;
                    ans=s.substr(start,end-start);
                }
                
                //we check first character
                //str.erase(str.begin());
                char start_ch= s[start];
                
                if(mp.count(start_ch)==1){
                    mp[start_ch]++;
                    if(mp[start_ch]>0) counter++;
                }
                
                start++;
            }
            
            
        }
        return ans;
        
    }
};