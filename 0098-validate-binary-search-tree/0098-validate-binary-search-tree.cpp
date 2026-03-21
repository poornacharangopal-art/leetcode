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
    bool isValidBST(TreeNode* root) {
        queue<tuple<TreeNode*,long,long>>q;
        q.push({root,LONG_MIN,LONG_MAX});
        while(!q.empty()){
            auto[temp,minval,maxval]=q.front();
            q.pop();
            if(temp->val<=minval||temp->val>=maxval){
                return false;
            }
            if(temp->left){
                q.push({temp->left,minval,temp->val});
            }
            if(temp->right){
                q.push({temp->right,temp->val,maxval});
            }
        }
        return true;
    }
};