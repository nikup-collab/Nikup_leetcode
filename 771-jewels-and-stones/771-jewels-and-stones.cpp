class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        
        //creating the frequency table
        int count=0;
        for(int i=0;i<stones.size();i++) m[stones[i]]++;
        
        for(int i=0; i<jewels.size();i++){
            
            if(m.find(jewels[i])!=m.end()){
                count+= m[jewels[i]];
            }
        }
        return count;
    }
    
};