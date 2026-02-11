class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.size();
        int num=-1;
        if(l>haystack.size()){
            return num;
        }
        for(int i=0;i<=haystack.size()-l;i++){
            std::string s=haystack.substr(i,l);
            if(s==needle){
                num=i;
                return num;
            }
        }
        return num;
    }
};