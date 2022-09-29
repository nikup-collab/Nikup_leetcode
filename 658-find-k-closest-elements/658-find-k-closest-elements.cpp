class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<pair<int,int>> vect;
        
        for(int i=0; i<arr.size(); i++){
            
            
                
                int dist = abs(arr[i]-x);
               
                vect.push_back({dist, arr[i]});
            
        }
        sort(vect.begin(),vect.end());
        
        vector<int>answer;
        
        for(int i=0;i< vect.size();i++){
            answer.push_back(vect[i].second);
            
            if(answer.size()==k) break;
        }
        sort(answer.begin(), answer.end());
       return answer;
    }
};