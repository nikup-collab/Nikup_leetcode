class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> vect;
        
        long long  start=0,  end=cheeseSlices;
        while(start<=end){
            
            if( (start*4) + (end*2) == tomatoSlices){
                vect.push_back(start);
                vect.push_back(end);
            }
            else if( (start*2) + (end*4)== tomatoSlices){
                vect.push_back(end);
                vect.push_back(start);
            }
            start++;
            end--;
            
        }
        return vect;
    }
};