class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<long long>v(s.size(),0);      
        for(int i=0;i<shifts.size();i++){
            int n=-1;
            if(shifts[i][2]==1){
                n=1;
            }
            v[shifts[i][0]]+=n;
            if(shifts[i][1]+1<v.size())
            v[shifts[i][1]+1]-=n;
        }
          long long shift = 0;

        for(int i = 0; i < s.size(); i++) {
            shift += v[i];

            shift %= 26;

            s[i] = (s[i] - 'a' + shift + 26) % 26 + 'a';
        }

        return s;
    }
};