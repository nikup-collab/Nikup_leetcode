bool isvowel(char &ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
    
    return false;
}







class Solution {
public:
    int maxVowels(string s, int k) {
        
        int i=0, j=0, count=0;
        int ans=0;
        while(j<s.size()){
            if(isvowel(s[j])==true){
                count++;
                
            }
            
            if(j-i+1<k) j++;
            
            else if(j-i+1==k){
                ans=max(ans,count);
                
                if(isvowel(s[i])) count--;
                    
                
               // if(isvowel(s[j+1])) count++;
              
                i++;
                j++;
                
                
            }
        }
        return ans;
        
    }
};