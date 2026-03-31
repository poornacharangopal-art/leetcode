/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
         vector<int>v;
         if(root==NULL){
            return v;
         }
        map<int,int>m;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            m[temp->val]+=1;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        int maxi=0;
        for(auto &p:m){
            if(p.second>maxi){
                maxi=p.second;
            }
        }
        for(auto &p:m){
            if(p.second==maxi){
                v.push_back(p.first);
            }
        }
        return v;
    }
};