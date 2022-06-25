void helper(string &s, int start, int end){
     end=end-1;
    while(start<end){
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    
}




class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int j=0;
        for(int i=0; i<=n;i++){
            
            if(s[i]==' ' || i==n){
                helper(s,j,i);
                j=i+1;
                
            }
        }
        return s;
    }
};