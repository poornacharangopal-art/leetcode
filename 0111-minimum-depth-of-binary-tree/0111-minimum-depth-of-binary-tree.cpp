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
    void mini(TreeNode*root,int&count,int&ans){

        if (!root)
            return;
        if(!root->left&&!root->right){
            ans=min(ans,count);
            return;
        }
         count++;
        if(root->right)
        mini(root->right,count,ans);
        if(root->left)
        mini(root->left,count,ans);
         count--;   // VERY IMPORTANT
    }
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=INT_MAX,count=1;
        mini(root,count,ans);
        return ans;
    }
};