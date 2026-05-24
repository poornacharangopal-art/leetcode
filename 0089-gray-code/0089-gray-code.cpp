class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>ans;
        int m=pow(2,n);
        for(int i=0;i<m;i++){
            ans.push_back(i^(i>>1));
        }
        return ans;
    }
};