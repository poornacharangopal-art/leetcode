class Solution {
public:
int backtrack(int i, int j, vector<vector<int>>& triangle, vector<vector<int>>& dp,vector<vector<bool>>& visited) {
if (j == triangle.size() - 1)
return triangle[j][i];
      if (visited[j][i])
            return dp[j][i];

    int one = triangle[j][i] + backtrack(i, j + 1, triangle, dp,visited);
    int two = triangle[j][i] + backtrack(i + 1, j + 1, triangle, dp,visited);
    visited[j][i] = true;
    return dp[j][i] = min(one, two);
}

int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    vector<vector<bool>> visited(n, vector<bool>(n, false));

        return backtrack(0, 0, triangle, dp, visited);
}
};
