class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<pair<int,int>>v;
        for(int i=0;i<ratings.size();i++){
            v.push_back({ratings[i],i});
        }
        sort(v.begin(),v.end());
        vector<int>candy(v.size(),1);
        for(int i=1;i<v.size();i++){
            int j=v[i].second;
            if(j != 0 && ratings[j] > ratings[j-1]) {
                candy[j] = max(candy[j], candy[j-1] + 1);
            }

            if(j != v.size()-1 && ratings[j] > ratings[j+1]) {
                candy[j] = max(candy[j], candy[j+1] + 1);
            }
        }
        int sum=0;
        for(int i=0;i<candy.size();i++){
            sum+=candy[i];
        }
        return sum;
    }
};