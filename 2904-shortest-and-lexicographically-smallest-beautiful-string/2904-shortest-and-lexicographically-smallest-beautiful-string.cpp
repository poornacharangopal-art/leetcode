class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string>v;
        int i=0,j=0;
        int ones=0,zeros=0;
        while(j<s.size()){
            if(s[j]=='1'){
                ones++;
            }
            else{
                zeros++;
            }
            if(ones==k){
                    while(i<j && s[i]=='0'){
                    i++;
                }
                string t=s.substr(i,j-i+1);
                v.push_back(t);
                if(s[i]=='1'){
                    ones--;
                    i++;
                }
                else{
                    i++;
                }
                while(i<j&&ones==k){

                    v.push_back(s.substr(i,j-i+1));
                    if(s[i]=='1'){
                    ones--;
                    i++;
                }
                else{
                    i++;
                }
                }
            }
            j++;
        }if(v.size()==0){
            return "";
        }
        sort(v.begin(),v.end(),[&](string a,string b){
            if(a.size()==b.size()){
                return a<b;
            }
            return a.size()<b.size();
        });
        return v[0];
    }
};