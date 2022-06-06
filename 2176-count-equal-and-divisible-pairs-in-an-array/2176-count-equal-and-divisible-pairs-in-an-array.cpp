class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
                unordered_map<int, vector<int>> ump;
        for(int i = 0; i < nums.size(); ++i)
            ump[nums[i]].push_back(i);
        int count = 0;
        for(auto it = ump.begin(); it != ump.end(); ++it){
            vector<int> temp = it->second;
            for(int i = 0; i < temp.size() - 1; ++i){
                for(int j = i + 1; j < temp.size(); ++j){
                    if((temp[i] * temp[j]) % k == 0)
                        count++;
                }
            }
        }
        return count;

    }
};