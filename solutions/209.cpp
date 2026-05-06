class Solution {
public:
  int minSubArrayLen(int target, vector<int>& nums) {
    int N = (int) nums.size();

    int ans = N + 1;
    
    long long sum = 0;
    int l = 0;
    
    for (int r = 0; r < N; ++r) {
      sum += nums[r];

      while (l <= r && sum >= target) {
        ans = std::min(ans, r - l + 1);
        sum -= nums[l++];
      }
    }

    return (ans == N + 1 ? 0 : ans);
  }
};
