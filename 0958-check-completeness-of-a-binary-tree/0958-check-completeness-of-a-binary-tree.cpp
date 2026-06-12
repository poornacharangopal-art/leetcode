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
    int countnodes(TreeNode*root){
        if(root==nullptr)
        return 0;
        return 1+countnodes(root->right)+countnodes(root->left);
    }
    bool iscomplete(TreeNode* root,int index,int totalnodes){
        if(root==nullptr)
        return true;
        if(index>=totalnodes)
        return false;
        else
        return iscomplete(root->left,2*index+1,totalnodes)&&iscomplete(root->right,2*index+2,totalnodes);
    }
    bool isCompleteTree(TreeNode* root) {
        int totalnodes=countnodes(root);
        if(iscomplete(root,0,totalnodes)){
            return true;
        }
        return false;
    }
};