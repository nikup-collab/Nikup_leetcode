#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vect;
        int start=0, end=numbers.size()-1;
        
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                vect.push_back(start+1);
                vect.push_back(end+1);
            }
            
            if(numbers[start]+numbers[end]>target) end--;
            else
                start++;
        }
        return vect;
        
    }
};