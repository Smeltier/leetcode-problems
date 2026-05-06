class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int it = 0; it < nums.size(); ++it) {
      int complement = target - nums[it];

      if (seen.find(complement) != seen.end()) {
        return {seen[complement], it};
      }

      seen[nums[it]] = it;
    }

    return {};
  }
};
