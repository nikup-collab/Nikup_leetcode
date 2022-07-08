class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //frequency table
        
        unordered_map<char,int> m;
        
        for(int i=0;i<s1.size();i++) m[s1[i]]++;
        
        //for window
        int i=0, j=0, counter=m.size();
        
        while(j<s2.size()){
            
            char l_ch=s2[j];
            if(m.count(l_ch)==1){
                m[l_ch]--;
                if(m[l_ch]==0) counter--;
                
            }
            
             j++;
            
             while(counter==0){
                
                if(j-i==s1.size()) return true;
                
                if(m.count(s2[i])==1){
                    m[s2[i]]++;
                     if(m[s2[i]]>0) counter++;
                }
                i++;
            }
        }
        return false;
    }
};