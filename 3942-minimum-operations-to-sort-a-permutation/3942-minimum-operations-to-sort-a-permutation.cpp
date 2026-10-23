class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                pos = i;
                break;
            }
        }

        bool increasing = true;
        bool decreasing = true;

        // Check circularly increasing order from 0.
        for (int i = 1; i < n; i++) {
            int prev = (pos + i - 1) % n;
            int curr = (pos + i) % n;

            if (nums[curr] <= nums[prev]) {
                increasing = false;
                break;
            }
        }

        // Check circularly decreasing order from 0.
        for (int i = 1; i < n; i++) {
            int prev = (pos - i + 1 + n) % n;
            int curr = (pos - i + n) % n;

            if (nums[curr] <= nums[prev]) {
                decreasing = false;
                break;
            }
        }

        int ans = INT_MAX;

        if (increasing) {
            ans = min(ans, pos);
            ans = min(ans, n - pos + 2);
        }

        if (decreasing) {
            ans = min(ans, pos + 2);
            ans = min(ans, n - pos);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};