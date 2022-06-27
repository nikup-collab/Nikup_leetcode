bool helper(string &text, int start,int end, unordered_map<char,int> &m){
    
    while(start<=end){
        if(m.find(text[start])!=m.end()) return false;
        start++;
    }
    return true;
}





class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n=text.size();
        
        unordered_map<char,int> m;
        int count=0;
        for(int i=0;i<brokenLetters.size();i++) m[brokenLetters[i]]++;
        int j=0;
        for(int i=0;i<text.size();i++){
            if(text[i]==' ' || i==n-1){
               if( helper(text,j,i,m)==true) count++;
                j=i;
            }
        }
        return count;
    }
};