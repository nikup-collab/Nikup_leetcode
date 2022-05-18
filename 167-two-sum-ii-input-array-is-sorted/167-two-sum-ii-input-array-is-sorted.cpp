#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vect(2);
        int start=0,end=numbers.size()-1;
        while(start<end){
            if((numbers[start]+numbers[end])>target)
                end--;
            else if((numbers[start]+numbers[end])<target)
                start++;
            else{
                vect[0]=start+1;
                vect[1]=end+1;
                return vect;
            }
                
            
        }
       return vect;
    }
};