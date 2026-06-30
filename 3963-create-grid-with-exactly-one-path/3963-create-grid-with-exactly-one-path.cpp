class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>v;
        for(int i=0;i<m;i++){
            if(i==0){
                string s(n,'.');
                v.push_back(s);
            }
            else{
            string s(n,'#');
            s[n-1]='.';
            v.push_back(s);
            }
        }
        return v;
    }
};