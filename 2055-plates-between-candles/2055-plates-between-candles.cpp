class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size();

        vector<int> plates(n, 0);
        vector<int> candlesltor(n, -1);
        vector<int> candlesrtol(n, -1);

        int last = -1;

        // Nearest candle from left
        for (int i = 0; i < n; i++) {
            if (s[i] == '|')
                last = i;

            candlesltor[i] = last;
        }

        last = -1;

        // Nearest candle from right
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '|')
                last = i;

            candlesrtol[i] = last;
        }

        // Prefix sum of plates
        for (int i = 0; i < n; i++) {
            plates[i] = (i > 0 ? plates[i - 1] : 0);

            if (s[i] == '*')
                plates[i]++;
        }

        vector<int> ans;

        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0];
            int r = queries[i][1];

            int left = candlesrtol[l];
            int right = candlesltor[r];

            if (left == -1 || right == -1 || left >= right) {
                ans.push_back(0);
            } else {
                ans.push_back(plates[right] - plates[left]);
            }
        }

        return ans;
    }
};