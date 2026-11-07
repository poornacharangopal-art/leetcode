class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        
        sort(logs.begin(), logs.end(), [](vector<int> a, vector<int> b) {
            if(a[1] == b[1]) {
                return a[0] < b[0];
            }
            return a[1] < b[1];
        });

        vector<pair<int,int>> v;

        for(int i = 0; i < queries.size(); i++) {
            v.push_back({queries[i], i});
        }

        sort(v.begin(), v.end());

        unordered_map<int,int> mp;
        vector<int> ans(queries.size());

        int l = 0, r = 0;

        for(auto p : v) {
            int start = p.first - x;

            while(r < logs.size() && logs[r][1] <= p.first) {
                mp[logs[r][0]]++;
                r++;
            }

            while(l < r && logs[l][1] < start) {
                mp[logs[l][0]]--;

                if(mp[logs[l][0]] == 0) {
                    mp.erase(logs[l][0]);
                }

                l++;
            }

            ans[p.second] = n - mp.size();
        }

        return ans;
    }
};