class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n=words2.size();

        unordered_map<char,int>mp;
         for(int i=0;i<words2.size();i++){

            unordered_map<char,int> temp;

            for(int j=0;j<words2[i].size();j++){
                temp[words2[i][j]]++;
            }

            for(auto it : temp){
                mp[it.first]=max(mp[it.first],it.second);
            }
        }
        int m=words1.size();
        unordered_map<char,int>mp1[m];

        for(int i=0;i<words1.size();i++){
            for(int j=0;j<words1[i].size();j++){
                mp1[i][words1[i][j]]++;
            }
        }

        vector<string>ans;

        for(int i=0;i<words1.size();i++){

            unordered_map<char,int>mp2=mp1[i];

            bool isSubset=true;

                for(auto it : mp){

                    if(mp2.find(it.first)==mp2.end() ||
                       mp2[it.first] < it.second){

                        isSubset=false;
                         break;  
                    }
                }

            if(isSubset){
                ans.push_back(words1[i]);
            }
        }


        return ans;
    }
};