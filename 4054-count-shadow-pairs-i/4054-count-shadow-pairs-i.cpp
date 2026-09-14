class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
                vector<int> s;
        long long ans = 0;

        for (int x : nums) {
            while (!s.empty() && s.back() > x) {
                s.pop_back();
            }

            int bound = lower_bound(s.begin(), s.end(), x) - s.begin();

            ans += bound;

            s.push_back(x);
        }

        return ans;

    }
};