class Solution {
public:
   void backtrack(vector<string>&words,vector<string>&v,vector<vector<string>>&ans,vector<int>&used){
    if(v.size()==4){
        if(v[0][0]==v[1][0]&&v[0][3]==v[2][0]&&v[3][0]==v[1][3]&&v[3][3]==v[2][3]){
            ans.push_back(v);
        }
        return;
    }
    for(int j=0;j<words.size();j++){
        if(used[j])continue;
        used[j]=1;
        v.push_back(words[j]);
        backtrack(words,v,ans,used);
        used[j]=0;
        v.pop_back();
    }
   }
    vector<vector<string>> wordSquares(vector<string>& words) {
       vector<vector<string>>ans;
       vector<string>v;
       vector<int>used(words.size(),0);
        backtrack(words,v,ans,used);
       sort(ans.begin(),ans.end());
       return ans; 
    }
};