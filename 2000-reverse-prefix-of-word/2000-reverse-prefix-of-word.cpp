void  reverse(string & word, int idx){
    int start=0, end=idx;
    
    while(start<end){
        char temp=word[start];
        word[start]=word[end];
        word[end]=temp;
        start++;
        end--;
    }
        
    }







#include<bits/stdc++.h>
class Solution {
public: 
    string reversePrefix(string word, char ch) {
        
        int n=word.size();
        int id;
        
        for(int i=0;i<n;i++){
            if(word[i]==ch) {
                id=i;
                break;
                
            }
        }
        
        if(id<n){
            reverse(word,id);
        }
        return word;
        
    }
};