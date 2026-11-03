class Solution {
public:
    int countCollisions(string directions) {
        stack<char> st;
        int ans = 0;

        for (int i = 0; i < directions.size(); i++) {
            char c = directions[i];

            if (c == 'R') {
                st.push('R');
            }

            else if (c == 'S') {
                while (!st.empty() && st.top() == 'R') {
                    ans++;
                    st.pop();
                }
                st.push('S');
            }

            else if (c == 'L') {
                if (!st.empty() && st.top() == 'R') {
                    while (!st.empty() && st.top() == 'R') {
                        ans++;
                        st.pop();
                    }

                    ans++;
                    st.push('S');
                }
                else if (!st.empty() && st.top() == 'S') {
                    ans++;
                    st.push('S');
                }
            }
        }

        return ans;
    }
};