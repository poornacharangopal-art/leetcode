class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> p=score;
        vector<string>f(score.size());
        sort(p.begin(),p.end());
        for(int i=0;i<score.size();i++){
            int count=0;
            for(int j=0;j<p.size();j++){
                if(score[i]==p[j]){
                    count=j;
                    break;
                }
            }
            if(count==score.size()-1){
                f[i]="Gold Medal";
            }
            else if(count==score.size()-2){
                f[i]="Silver Medal";
            }
            else if(count==score.size()-3){
                f[i]="Bronze Medal";
            }
            else{
                count=score.size()-count;
                std::string ch=to_string(count);
                f[i]=ch;
            }
        }
        return f;
    }
};