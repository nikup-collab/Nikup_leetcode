#include<bits/stdc++.h>
class Solution {
public:
    bool isThree(int n) {
        int count=0;
        for(int i=1;i*i<=n;i++ ){
            if(n%i==0){
                if(i==n/i) 
                    count=count+1;
                else
                    count=count+2;
            }
        }
        if(count==3) return true;
        else
            return false;
    }
};