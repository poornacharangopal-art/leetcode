class Solution {
public:
    void backtrack(vector<int>& digits, vector<int>& used, int num, int len,
                   unordered_set<int>& st) {
        
        if(len == 3) {
            if(num % 2 == 0)
                st.insert(num);
            return;
        }

        for(int i = 0; i < digits.size(); i++) {
            if(used[i]) continue;

            if(len == 0 && digits[i] == 0) continue;

            used[i] = 1;
            backtrack(digits, used, num * 10 + digits[i], len + 1, st);
            used[i] = 0;
        }
    }

    int totalNumbers(vector<int>& digits) {
        unordered_set<int> st;
        vector<int> used(digits.size(), 0);

        backtrack(digits, used, 0, 0, st);

        return st.size();
    }
};