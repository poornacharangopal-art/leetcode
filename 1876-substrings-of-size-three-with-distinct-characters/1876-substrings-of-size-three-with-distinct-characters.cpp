class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3){
            return 0;
        }
        int i=0;
        int count=0;
        while(i<s.size()-2){
            unordered_map<char,int>m;
            string s1=s.substr(i,3);
            for(char x:s1){
                m[x]+=1;
            }
            if(m.size()==3){
                count+=1;
            }
            i++;
        }
        return count;
    }
};