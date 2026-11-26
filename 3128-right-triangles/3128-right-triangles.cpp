class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& nums) {
        unordered_map<int, int> row;
        unordered_map<int, int> cols;

        long long count = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                if (nums[i][j] == 1) {
                    row[i]++;
                    cols[j]++;
                }
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                if (nums[i][j] == 1) {
                    count += 1LL * (row[i] - 1) * (cols[j] - 1);
                }
            }
        }

        return count;
    }
};