class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if (mp.find(need) != mp.end()) {
                int j = mp[need];
                if (j < i) return {j, i};
                else return {i, j};
            }

            mp[nums[i]] = i;
        }

        return {}; // guaranteed one solution
    }
};
