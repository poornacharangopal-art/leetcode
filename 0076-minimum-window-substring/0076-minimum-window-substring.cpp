class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0, right = 0;
        int start = 0, end = 0;
        unordered_map<char, int> mp1, mp2;

        for (char c : t)
            mp1[c]++;

        int ans = INT_MAX;

        while (right < s.size()) {
            mp2[s[right]]++;

            bool isok = true;
            for (auto &p : mp1) {
                if (mp2[p.first] < p.second) {
                    isok = false;
                    break;
                }
            }

            while (isok) {
                if (right - left + 1 < ans) {
                    ans = right - left + 1;
                    start = left;
                    end = right;
                }

                mp2[s[left]]--;
                if (mp2[s[left]] == 0)
                    mp2.erase(s[left]);

                left++;

                isok = true;
                for (auto &p : mp1) {
                    if (mp2[p.first] < p.second) {
                        isok = false;
                        break;
                    }
                }
            }

            right++;
        }

        if (ans == INT_MAX)
            return "";

        return s.substr(start, end - start + 1);
    }
};