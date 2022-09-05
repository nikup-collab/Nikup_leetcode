class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<>> minh(nums.begin(), nums.end());
        
        
        for(int i=0;i<k;i++){
            
            int a= minh.top();
            minh.pop();
            int c= -a;
            minh.push(c);
        }
        
        int sum=0;
        
        while(minh.size()>0){
            sum+= minh.top();
            minh.pop();
        }
        
        return sum;
    }
};