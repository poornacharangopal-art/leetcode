class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int>mp1;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>s3(nums3.begin(),nums3.end());
        for(auto it=s1.begin();it!=s1.end();it++){
            int i=*it;
            mp1[i]+=1;
        }
         for(auto it=s2.begin();it!=s2.end();it++){
            int i=*it;
            mp1[i]+=1;
        }
         for(auto it=s3.begin();it!=s3.end();it++){
            int i=*it;
            mp1[i]+=1;
        }
        vector<int>v;
        for(auto &p:mp1){
            if(p.second>=2){
                v.push_back(p.first);
            }
        }
        return v;
    }
};