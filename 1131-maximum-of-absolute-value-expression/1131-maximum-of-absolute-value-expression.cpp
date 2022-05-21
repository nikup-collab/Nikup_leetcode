class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
         int maxans = 0;
            int n = arr1.size();
            int max1 = INT_MIN, min1 = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int x = arr1[i] + i + arr2[i];
                max1 = max(max1, x);
                min1 = min(min1, x);
            }
            maxans = max(maxans, abs(max1 - min1));
            max1 = INT_MIN, min1 = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int x = arr1[i] - i + arr2[i];
                max1 = max(max1, x);
                min1 = min(min1, x);
            }
            maxans = max(maxans, abs(max1 - min1));
            max1 = INT_MIN, min1 = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int x = arr1[i] + i - arr2[i];
                max1 = max(max1, x);
                min1 = min(min1, x);
            }
            maxans = max(maxans, abs(max1 - min1));
            max1 = INT_MIN, min1 = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int x = arr1[i] - i - arr2[i];
                max1 = max(max1, x);
                min1 = min(min1, x);
            }
            maxans = max(maxans, abs(max1 - min1));
            return maxans;
    }
};