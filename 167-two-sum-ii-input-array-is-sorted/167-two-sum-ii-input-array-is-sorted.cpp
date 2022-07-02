class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vect;
        int i=0, j=numbers.size()-1;
        
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                vect.push_back(i+1);
                vect.push_back(j+1);
            }
            
            if(numbers[i]+numbers[j]>target) j--;
            else i++;
        }
        return vect;
    }
};