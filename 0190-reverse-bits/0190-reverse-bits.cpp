class Solution {
public:
    vector<int> tobinary(int n){
        vector<int>v(32,0);
        int i=0;
        while(n>0){
            v[i]=n%2;
            n=n/2;
            i++;
        }
        return v;
    }
    int tonumber(vector<int>v){
        int num=0;
        for(int i=0;i<v.size();i++){
            num+=v[i]*pow(2,i);
        }
        return num;
    }
    int reverseBits(int n) {
        vector<int>v=tobinary(n);
        reverse(v.begin(),v.end());
        int ans=tonumber(v);
        return ans;
    }
};