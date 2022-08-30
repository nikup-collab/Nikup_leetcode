class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        //min heap
        
        priority_queue<int> minh(stones.begin(),stones.end());
        
        
        while(minh.size()>1){
            
            int a= minh.top();
            minh.pop();
            
            int b=minh.top();
            minh.pop();
            if(a!=b){
            int c= a-b;
            minh.push(c);
            }
            
        
        }
        
        return (minh.empty()) ?0 : minh.top();
    }
};