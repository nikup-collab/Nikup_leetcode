#include<bits/stdc++.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
                int i = 0, j = nums.size() - 1, k = j;
        vector <int> ret(k + 1, 0);
        while (k >= 0) {
            if (abs(nums[i]) > abs(nums[j])) ret[k--] = nums[i] * nums[i++];
            else ret[k--] = nums[j] * nums[j--];
        }
        return ret;


      

    }
};