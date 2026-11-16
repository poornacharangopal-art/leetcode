class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k) {
            int i = 0;
            string sum = "";
            int count = 0;

            for(int j = 0; j < s.size(); j++) {
                count += s[j] - '0';

                if(j - i + 1 == k) {
                    sum += to_string(count);
                    count = 0;
                    i = j + 1;
                }

                if(j == s.size() - 1 && i <= j) {
                    sum += to_string(count);
                }
            }

            s = sum;
        }

        return s;
    }
};