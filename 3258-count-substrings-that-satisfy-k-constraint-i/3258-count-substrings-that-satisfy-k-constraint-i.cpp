class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int i=0,ones=0,zeros=0;
        int count=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='0')zeros++;
            else ones++;
            while(ones>k&&zeros>k){
              if(s[i]=='0')zeros--;
              else ones--;
              i++;
            }
            count+=j-i+1;
        }
        return count;
    }
};