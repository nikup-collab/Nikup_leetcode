class Solution {
public:
    int minCostClimbingStairs(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> memo(n, -1);
        return min(cost(arr, memo, n-1), cost(arr, memo, n-2));
    }
    
    int cost(vector<int>& arr, vector<int> &memo, int i){
        if(i == 0 || i == 1) return arr[i];
        if(memo[i] != -1) return memo[i];
        return memo[i] = min(arr[i] + cost(arr, memo, i-1), arr[i] + cost(arr, memo, i-2));
       
    }


};