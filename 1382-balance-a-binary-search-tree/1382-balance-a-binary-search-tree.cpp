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
    vector<int>v;
    void inorder(TreeNode*root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    TreeNode*insert(vector<int>v){
        if(v.size()==0)return NULL;
        int n=v.size()/2;
        TreeNode*root=new TreeNode(v[n]);
        vector<int>left(v.begin(),v.begin()+n);
        if(left.size()!=0){
            root->left=insert(left);
        }
        vector<int>right(v.begin()+n+1,v.end());
        if(right.size()!=0)root->right=insert(right);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return insert(v);
    }
};