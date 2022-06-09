void reverse(vector<char> &s, int start,int end){
    if(start>=end) return;     //base condition
    
    swap(s[start++],s[end--]);   //make problem smaller
    reverse(s,start,end);
}





class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        reverse(s,0,n);
        
    }
};