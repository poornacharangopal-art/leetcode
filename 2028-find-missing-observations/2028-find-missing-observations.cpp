class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        for(int x:rolls){
            sum+=x;
        }
        int extra;
        extra=mean*(rolls.size()+n)-sum;
        vector<int>ans;
        if(extra>6*n||extra<=0){
            return ans;
        }
        if(extra<n){
            return ans;
        }
        else{
            int a=extra/n;
            int b=extra%n;
            for(int i=0;i<n;i++){
                int r=0;
                if(b>0){
                    r=1;
                }
                int l=a+r;               
                if(b>0){
                    b--;
                }
                ans.push_back(l);
            }
        }
        return ans;
    }
};