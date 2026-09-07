class Solution {
public:
     void minunfair(int ind,vector<int>&cookies,vector<int>&temp,int k,int&ans){
        if(ind==cookies.size()){
            int maxi=INT_MIN;
            for(int i=0;i<temp.size();i++){
                maxi=max(maxi,temp[i]);
            }
            ans=min(ans,maxi);
            return;
        }
        for(int i=0;i<k;i++){
            temp[i]+=cookies[ind];
            minunfair(ind+1,cookies,temp,k,ans);
            temp[i]-=cookies[ind];
        }
     }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>temp(k,0);
        int ans=INT_MAX;
        minunfair(0,cookies,temp,k,ans);
        return ans;
    }
};