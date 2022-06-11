class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<int> set;
        int answer = 0;
        allSubs(0, nums, set, answer);
        return answer;
    }
    
    int allSubs(int cur, vector<int>& nums, vector<int> set, int &answer) {
        if (cur == nums.size()) {
            if (set.size() > 0) {
                int sum = set[0];
                for (int i = 1; i < set.size(); i++) {
                    sum ^= set[i];
                }
                answer += sum;
            }
            return 0;
        }
        // Include
        set.push_back(nums[cur]);
        allSubs(cur + 1, nums, set, answer);
        // Exclude
        set.pop_back();
        allSubs(cur + 1, nums, set, answer);
        return 0;
    }
};
