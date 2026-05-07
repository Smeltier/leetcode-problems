// Using Kadane's Algorithms
// Time Complexity = O(n)
// Space Complexity = O(1)
class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int N = (int) nums.size();
  
    int global_max = nums[0];
    int current_max = nums[0];   
  
    for (int i = 1; i < N; ++i) {
      current_max = std::max(nums[i], current_max + nums[i]);
      global_max = std::max(global_max, current_max);
    }
  
    return global_max;
  }
};
