class Solution {
public:
    bool isFascinating(int n) {
        string st=to_string(n);
        int a=n;
        n=n*2;
        st+=to_string(n);
        n=a*3;
        st+=to_string(n);
        unordered_map<char,int>m;
        for(int i=0;i<st.size();i++){
            m[st[i]]+=1;
        }
        if(m.count('0'))
        return false;
        if(m.size()!=9)
        return false;
        for(auto&p:m){
            if(p.second!=1){
                return false;
            }
        }
        return true;
    }
};