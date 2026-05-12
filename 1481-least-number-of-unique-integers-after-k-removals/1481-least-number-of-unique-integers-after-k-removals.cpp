class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
         unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        vector<int>v;
        for(auto&p:mp){
            v.push_back(p.second);
        }
        sort(v.begin(),v.end());
        int remov=0;
        int i=0;
        int n=0;
        while(remov<k&&i<v.size()){
            remov+=v[i];
            if(remov>k){
                n=1;           
            }
            i++;
        }
        return v.size()-i+n;
    }
};