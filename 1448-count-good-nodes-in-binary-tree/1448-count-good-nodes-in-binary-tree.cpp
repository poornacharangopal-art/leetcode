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
    int goodNodes(TreeNode* root) {
        int count=0;
        queue<pair<TreeNode*,int>>q;
        if(root==NULL){
            return count;
        }
        q.push({root,root->val});
        while(!q.empty()){
            TreeNode*node=q.front().first;
            int maxi=q.front().second;
            q.pop();
            if(node->val>=maxi)count++;
            if(node->left){
                int maxu=maxi;
                if(node->left->val>maxu)
                    maxu=node->left->val;
                    q.push({node->left,maxu});
            }
            if(node->right){
                int maxu=maxi;
                  if(node->right->val>maxu)
                    maxu=node->right->val;
                    q.push({node->right,maxu});
            }
            }
            return count;
    }
};