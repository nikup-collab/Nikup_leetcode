class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       //to store answer 
        vector<int> ans;
        
        
        
        //frequency table
        
        unordered_map<char,int> m;
        for(int i=0; i<p.size(); i++){
            m[p[i]]++;
        }
        
        //sliding window
        int i=0, j=0, counter= m.size();
        
        while(j<s.size()){
            
            char end_ch= s[j];
            
            if(m.find(end_ch)!=m.end()){
                m[end_ch]--;
                if(m[end_ch]==0) counter--;
            }
            j++;
            
            while(counter==0){
                if(j-i==p.size()) ans.push_back(i);
                
                char start_ch=s[i];
                if(m.count(start_ch)==1){
                    m[start_ch]++;
                    if(m[start_ch]>0) counter++;
                    
                }
                i++;
                
            }
        }
        return ans;
    }
};