class Solution {
public:
    int lengthOfLastWord(string s) {
        
        reverse(s.begin(),s.end());
        
        int i=1, space, count;
        
        if(s[0]==' ' ){
            space=1;
            count=0;
        }
        else{
            space=0;
            count=1;
        }
        
        while(i<s.size()){
            
            if(s[i]==' ') space++;
            else count++;
            
            if(s[i]==' ' && s[i-1]!=' '&& i!=0) break;
            
            i++;
        }
        
        int ans=count;
        
        return  ans;
        
    }
};