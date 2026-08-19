class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<vector<int>>v;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                vector<int>v1(2);
                v1[0]=arr[i];
                v1[1]=arr[j];
                v.push_back(v1);
            }
        }
        priority_queue<vector<double>>pq;
        for(int i=0;i<v.size();i++){
            vector<double>v1(2);
            v1[0]=(double)v[i][0]/v[i][1];
            v1[1]=i;
            pq.push(v1);
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<double>ans=pq.top();
        int index=ans[1];
        return v[index];
    }
};