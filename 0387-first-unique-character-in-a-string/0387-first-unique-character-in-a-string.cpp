class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        int l=s.size();
        for(auto&p:m){
            if(p.second==1){
                auto it=find(s.begin(),s.end(),p.first);
                int n=it-s.begin();
                if(l>n){
                    l=n;
                }
            }
        }
        if(l!=s.size()){
            return l;
        }
        return -1;
    }
};