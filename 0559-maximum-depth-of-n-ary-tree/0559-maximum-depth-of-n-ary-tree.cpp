/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     void mini(Node*root,int&count,int&ans){

        if (!root)
            return;
            vector<Node*>v=root->children;
        if(v.size()==0){
            ans=max(ans,count);
            return;
        }
         count++;
         for(int i=0;i<v.size();i++){
        mini(v[i],count,ans);
         }  
          count--; // VERY IMPORTANT
    }
    int maxDepth(Node* root) {
         if(root==NULL){
            return 0;
        }
        int ans=0,count=1;
        mini(root,count,ans);
        return ans;
    }
};