class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        for(auto&p:grid){
            v.insert(v.end(),p.begin(),p.end());
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        int a,b=0;
        int k1=0,k2=0;
        if(v[0]!=1){
            b=1;
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                a=v[i];
                k1=1;
            }
            else if(v[i+1]-v[i]!=1&&v[i+1]!=v[i]){
                b=v[i]+1;
                k2=1;
            }
            if(k1==1&&k2==1){
                break;
            }
        }
        if(b==0){
            b=v.size();
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};