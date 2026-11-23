class Solution {
public:
    string clearStars(string s) {
        int count = 0;
        priority_queue<pair<char,int>,vector<pair<char,int>>,greater<pair<char,int>>>pq;
        vector<bool>removed(s.size(),false);
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                int ind=pq.top().second;
                pq.pop();
                removed[-ind]=true;
                removed[i]=true;
            }
            else{
                pq.push({s[i],-i});
            }
        }
        string ans;
        for(int i=0;i<s.size();i++){
            if(removed[i])continue;
            ans.push_back(s[i]);
        } 
        return ans;
    }
};