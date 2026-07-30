class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>v;
        int i=0;
        while(i<chars.size()){
            char c=chars[i];
            int count=0;
            while(i<chars.size()&&chars[i]==c){
                count++;
                i++;
            }
            string s=to_string(count);
            v.push_back(c);
            if(count==1)
            continue;
            for(char ch:s){
                v.push_back(ch);
            }
        }
        chars=v;
        return chars.size();
    }
};