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
    void vec(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        vec(root->left,v);
        vec(root->right,v);
    }
    void flatten(TreeNode* root) {
        vector<int>v1;
        vec(root,v1);
        TreeNode* temp=root;
        int i=1;
        while(i<v1.size()){
            temp->right=new TreeNode(v1[i]);
            temp->left=nullptr;
            temp=temp->right;
            i++;
        }
    }
};