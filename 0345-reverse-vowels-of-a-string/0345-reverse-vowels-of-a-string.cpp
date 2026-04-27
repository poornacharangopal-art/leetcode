class Solution {
public:
    string reverseVowels(string s) {
        vector<int>vowels;
        for(int i=0;i<s.size();i++){
            char c=tolower(s[i]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vowels.push_back(i);
            }
        }
        int left=0,right=vowels.size()-1;
        while(left<right){
            swap(s[vowels[left]],s[vowels[right]]);
            left++;
            right--;
        }
        return s;
    }
};