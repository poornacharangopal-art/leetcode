class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mp;
        for(char x:num){
            int n=x-'0';
            mp[n]++;
        }
        for(int i=0;i<num.size();i++){
            int a=num[i]-'0';
            if(a!=mp[i]){
                return false;
            }
        }
        return true;
    }
};