/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
         vector<int>v,v2;
         ListNode*l=head;
        while(l!=NULL){
            v.push_back(l->val);
            l=l->next;
        }
        if(v.size()==0){
            return v2;
        }
        vector<int>v1(v.size());
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1){
                v1[i]=0;
                break;
            }
            for(int j=i+1;j<v.size();j++){
                if(v[i]<v[j]){
                    v1[i]=v[j];
                    break;
                }
            }
        }
        return v1;
    }
};