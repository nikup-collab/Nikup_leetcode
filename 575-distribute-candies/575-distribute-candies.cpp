class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        
        unordered_map<int,int> m;
        
        for(int i=0;i<candyType.size();i++) m[candyType[i]]++;
        
        int n=candyType.size();
        
        if(n/2 <= m.size()) return n/2;
        
        return m.size();
    }
};