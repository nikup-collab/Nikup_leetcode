int countword(string &s){
    
    char ch=' ';
    
    int count=1;
    for(int i=0;i<s.size();i++){
        if(isspace(s[i])) count++;
    }

    return count;
}





class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        int n=sentences.size();
        for(int i=0;i<n;i++){
           int ans= countword(sentences[i]);
            res=max(ans,res);
        }
        return res;
    }
};