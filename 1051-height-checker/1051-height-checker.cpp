#include<bits/stdc++.h>
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> vect;
        int count=0;
        //copying elelemnt of heights in to vect
        for(int i=0;i<heights.size();i++)
            vect.push_back(heights[i]);
        
        sort(heights.begin(), heights.end());
        
        //checking index
        for(int i=0;i<heights.size();i++){
            if(heights[i] != vect[i])
                count++;
        }
        return count;
    }
};