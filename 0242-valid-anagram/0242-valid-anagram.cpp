class Solution {
public:
    bool isAnagram(string s, string t) {
        bool equal=false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            equal=true;
        }
        return equal;
        
    }
};