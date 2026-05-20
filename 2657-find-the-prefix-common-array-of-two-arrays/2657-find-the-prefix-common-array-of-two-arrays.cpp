class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>c(A.size(),0);
        unordered_map<int,int>mp1,mp2;
        for(int i=0;i<A.size();i++){
            mp1[A[i]]++;
            mp2[B[i]]++;
            for(auto&p:mp1){
                if(mp2.count(p.first)){
                    c[i]+=min(mp2[p.first],p.second);
                }
            }
        }
        return c;
    }
};