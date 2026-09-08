class Solution {
public:
    void minjob(int pos,vector<int>&jobs,vector<int>&temp,int&ans,int k){
        if(pos==jobs.size()){
            int maxi=INT_MIN;
            for(int i=0;i<temp.size();i++){
                maxi=max(temp[i],maxi);
            }
            ans=min(ans,maxi);
            return;
        }
        for(int i=0;i<k;i++){
             if(temp[i] + jobs[pos] >= ans){
                continue;
            }
            temp[i] += jobs[pos];

            minjob(pos + 1, jobs, temp, ans, k);
            temp[i] -= jobs[pos];
            if(temp[i]==0){
                break;
            }
        }
    }
    int minimumTimeRequired(vector<int>& jobs, int k) {
        sort(jobs.begin(),jobs.end());
       vector<int>temp(k,0);
       int ans=INT_MAX;
       minjob(0,jobs,temp,ans,k);
       return ans; 
    }
};