
class Solution {
public:
    int minOperations(string s) {
        int num = INT_MAX;
        int pos = 0;

        for (int i = 0; i < s.size(); i++) {
            int n = int(s[i]);
            if (num > n) {
                num = n;
                pos = i;
            }
        }

        int pos1 = 0;
        num = -1;

        for (int i = 0; i < s.size(); i++) {
            int n = int(s[i]);
            if (num <= n) {
                num = n;
                pos1 = i;
            }
        }

        string s1 = s;
        sort(s1.begin(), s1.end());

        if (s == s1) {
            return 0;
        }

        if (s.size() == 2) {
            return -1;
        }

        if (s.size() > 2) {
            if (pos == s.size() - 1 && pos1 == 0) {
                return 3;
            }

            if (pos == 0 || pos1 == s.size() - 1) {
                return 1;
            }

            if (pos != 0 && pos != s.size() - 1) {
                return 2;
            }

            if (pos1 != 0 && pos1 != s.size() - 1) {
                return 2;
            }
        }

        return -1;
    }
};
