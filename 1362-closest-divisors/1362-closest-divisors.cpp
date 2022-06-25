class Solution {
public:
    vector<int> closestDivisors(int num) {
        
        vector<pair<int, pair<int,int>>> temp;
        int a=num+1;
        for(int i=1; i*i<a+1; i++){
           if(a%i==0){ 
            int dist= abs(i-(a/i));
            temp.push_back({ dist, {i, a/i}});
           }
            
            
        }
        
        
         int b=num+2;
        for(int i=1; i*i<b+1; i++){
            if(b%i==0){
            int dist=abs( i-(b/i));
            temp.push_back({ dist, {i, b/i}});
            }
            
            
        }
        
        sort(temp.begin(),temp.end());
        
        vector<int> ans;
        
        ans.push_back(temp[0].second.first);
        ans.push_back(temp[0].second.second);
        
        return ans;
    }
};