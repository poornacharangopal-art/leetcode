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
     void set(vector<int>&v,TreeNode*root){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        set(v,root->left);
        set(v,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        set(v,root);
        return v;
    }
};