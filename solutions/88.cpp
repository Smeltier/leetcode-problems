// Time: O(n), and Space: O(n + m)
class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans(m + n);

    int l = 0;
    int r = 0;
    int k = 0;

    while (l < m and r < n) {
      if (nums1[l] <= nums2[r]) {
        ans[k++] = nums1[l++];
      }
      else {
        ans[k++] = nums2[r++];
      }
    }

    while (l < m) {
      ans[k++] = nums1[l++];
    }

    while (r < n) {
      ans[k++] = nums2[r++];
    }

    nums1.assign(ans.begin(), ans.end());
  }
};
