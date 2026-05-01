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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>v;
        if(root==NULL){
            return v;
        }
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>v1;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                v1.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            v.push_back(v1);
        }
          reverse(v.begin(),v.end());
        return v;
    }
};