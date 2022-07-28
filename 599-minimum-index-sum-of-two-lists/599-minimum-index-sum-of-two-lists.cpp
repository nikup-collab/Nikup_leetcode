class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        vector<string>ans;
        int a=INT_MAX;
        unordered_map<string,int> m;
        
        for(int i=0;i<list1.size();i++){
            m.insert({list1[i],i});
        }
        
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end()){
                int sum=i+m[list2[i]];
                if(sum<a){
                    a=sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if(a==sum){
                    ans.push_back(list2[i]);
                }
                
                m.insert({list2[i],i});
            }
        }
        return ans;
    }
};