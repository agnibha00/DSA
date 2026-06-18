class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> maap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int a = target - nums[i];
            if (maap.find(a) != maap.end()) {
                return {maap[a], i};
            }
            maap[nums[i]] = i;
        }

        return {};
    }
};