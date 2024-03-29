class Solution {
public:
    int minSteps(string s, string t) {
        int ans=t.size();
        unordered_map<char,int> freq;
        
        for(int i=0;i<t.size();i++){ //frequency table of string t
            freq[t[i]]++;
        }
        int count=0;
        for(int i=0; i<s.size();i++){  //count frequency of character present in t
            if(freq.find(t[i])!=freq.end() && freq[s[i]]>0){
                count++;
                freq[s[i]]--;
            }
        }
        return ans-count; 
    }
};


/* create a hashmap and count how many character of string already presemnt in string and reduce that*/