class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>>pq;
        vector<vector<int>>ans(k);
        for(int i=0;i<points.size();i++){
            int a=points[i][0],b=points[i][1];
            int dis=a*a+b*b;
            vector<int>v(2);
            v[0]=dis;
            v[1]=i;
            pq.push(v);
            if(pq.size()>k){
                pq.pop();
            }
        }
        int n=k-1;
        while(!pq.empty()){
            vector<int>v=pq.top();
            int index=v[1];
            v=points[index];
            pq.pop();
            ans[n]=v;
            n--;
        }
        return ans;
    }
};