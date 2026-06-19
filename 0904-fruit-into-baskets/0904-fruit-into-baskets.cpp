class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int i=0,j=0;
        int ans=0;
        while(j<fruits.size()){
            if(mp.size()==2&&mp.find(fruits[j])==mp.end()){
                ans=max(ans,j-i);
                mp[fruits[j]]++;
                while(mp.size()>2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0){
                        mp.erase(fruits[i]);
                    }
                    i++;
                }
            }
            else{
                mp[fruits[j]]++;
            }
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};