



#include<bits/stdc++.h>
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());
        int ans = gcd(b,a);
        return ans;
    }
};