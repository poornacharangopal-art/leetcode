class Solution {
public:
    pair<int, int> backtrack(int i, int prev, vector<int>& nums,
                             vector<vector<pair<int,int>>>& dp) {

        if(i == nums.size()) {
            return {0, 1};
        }

        if(dp[i][prev + 1].first != -1) {
            return dp[i][prev + 1];
        }

        // Don't take nums[i]
        pair<int, int> notTake = backtrack(i + 1, prev, nums, dp);

        pair<int, int> take = {0, 0};

        // Take nums[i]
        if(prev == -1 || nums[i] > nums[prev]) {
            pair<int, int> temp =
                backtrack(i + 1, i, nums, dp);

            take.first = temp.first + 1;
            take.second = temp.second;
        }

        pair<int, int> result;

        if(take.first > notTake.first) {
            result = take;
        }
        else if(notTake.first > take.first) {
            result = notTake;
        }
        else {
            result.first = take.first;
            result.second = take.second;

            if(take.first == 0) {
                result.second = notTake.second;
            }
            else {
                result.second += notTake.second;
            }
        }

        return dp[i][prev + 1] = result;
    }

    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<vector<pair<int,int>>> dp(
            n, vector<pair<int,int>>(n + 1, {-1, -1})
        );

        return backtrack(0, -1, nums, dp).second;
    }
};