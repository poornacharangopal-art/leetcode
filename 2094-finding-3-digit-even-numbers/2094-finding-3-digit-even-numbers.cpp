class Solution {
public:
void backtrack(int num,int len,vector<int>&digits,vector<int>&used,unordered_set<int>&ans){
if(len==3){
        if(num%2==0){
            ans.insert(num);
            return;
        }
        return;
    }
    for(int i=0;i<digits.size();i++){
        if(used[i])continue;
         if(len == 0 && digits[i] == 0) continue;
        used[i]=1;
        backtrack(num*10+digits[i],len+1,digits,used,ans);
        used[i]=0;
    }
}
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int>s;
        vector<int>used(digits.size(),0);
        backtrack(0,0,digits,used,s);
        vector<int>ans(s.begin(),s.end());
        sort(ans.begin(),ans.end());
        return ans;
    }
};