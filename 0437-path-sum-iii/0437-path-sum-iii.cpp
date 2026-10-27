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
    void backtrack(TreeNode*root,long long sum,int targetsum,int&count){
        if(root==NULL){
            return;
        }
        sum += root->val;
        if(sum==targetsum){
            count++;
        }
        backtrack(root->left,sum,targetsum,count);
        backtrack(root->right,sum,targetsum,count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root){
            return 0;
        }
        int count=0;
        backtrack(root,0,targetSum,count);
        if(root->left)
        count+=pathSum(root->left,targetSum);
        if(root->right)
        count+=pathSum(root->right,targetSum);
        return count;
    }
};