class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i=0;i<words.size();i++){
            int sum=0;
            for(int j=0;j<words[i].size();j++){
                int value=words[i][j]-'a';
                sum+=weights[value];
            }
            sum=sum%26;
            int val=122-sum;
            char c=val;
            ans+=c;
        }
        return ans;
    }
};