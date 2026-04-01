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
   string serialize(TreeNode* root) {
    if (root == NULL) return "N";
    return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }
    TreeNode* insert(TreeNode*root,int value){
        if(root==NULL){
            root=new TreeNode(value);
            return root;
        }
        if(value>root->val){
            root->right=insert(root->right,value);
        }
        else if(value<root->val){
            root->left=insert(root->left,value);
        }
        return root;
    }
    TreeNode* BST(vector<int>v){
        TreeNode* root=NULL;
        for(int i=0;i<v.size();i++){
            root=insert(root,v[i]);
        }
        return root;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        } 
        set<string>s1;
        TreeNode* root=NULL;
        sort(v.begin(),v.end());
         vector<TreeNode*>v1;
        do{
            root=BST(v);
            string s=serialize(root);
            if(s1.find(s)==s1.end()){
                s1.insert(s);
                v1.push_back(root);
            }
            root=NULL;
        }while(next_permutation(v.begin(),v.end()));
        return v1;
    }
};