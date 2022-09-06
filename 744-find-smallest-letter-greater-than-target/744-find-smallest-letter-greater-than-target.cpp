class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int>count(26,0);
        
        for(int i=0;i<letters.size();i++){
            
            count[letters[i]-'a']++;
        }
        int lrn= target - 'a';
        for(int i=0;i<26;i++){
            
            if(count[i] !=0 and i > lrn ){
                
                return char(i + int('a'));
            }
        }
        return  letters[0];
    }
};