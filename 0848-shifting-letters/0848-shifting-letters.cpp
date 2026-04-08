class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<long long>v(shifts.size());
        reverse(shifts.begin(),shifts.end());
        v[0]=shifts[0];
        for(int i=1;i<shifts.size();i++){
            v[i]=shifts[i]+v[i-1];
        }
        reverse(v.begin(),v.end());
        string ans(s.size(),' ');
        for(int i=0;i<s.size();i++){
            int n=s[i];
                n = ((n- 'a') + v[i]) % 26 + 'a';
            ans[i]=(char)n;
        }
        return ans;
    }
};