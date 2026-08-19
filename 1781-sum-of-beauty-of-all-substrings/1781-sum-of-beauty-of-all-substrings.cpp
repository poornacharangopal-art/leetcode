class Solution {
public:
    int beautySum(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
             vector<int>v(26,0);
            for(int j=i;j<s.size();j++){
                int n1=s[j]-'a';
                v[n1]++;
                  int maxi = 0;
                int mini = INT_MAX;

                for (int k = 0; k < 26; k++) {

                    if (v[k] > 0) {
                        maxi = max(maxi, v[k]);
                        mini = min(mini, v[k]);
                    }
                }
                count+=maxi-mini;
            }
        }
        return count;
    }
};