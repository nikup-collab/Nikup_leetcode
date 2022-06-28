bool helper(char &ch){
    if(ch=='a' || ch=='i' || ch=='o' || ch=='u' || ch=='e' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') return true;
    
    return false;
}




class Solution {
public:
    string reverseVowels(string s) {
        
        int start=0, end=s.size()-1;
        
        while(start<end){
            if( helper(s[start])==true && helper(s[end])==true){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            
            if(helper(s[start])==false) start++;
            if(helper(s[end])==false)end--;
                
        }
        return s;
    }
};