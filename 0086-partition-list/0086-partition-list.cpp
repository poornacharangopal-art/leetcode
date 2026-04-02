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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL){
            return head;
        }
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v1;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<x){
                v1.push_back(v[i]);
                v.erase(v.begin()+i);
            }
        }
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v.size();i++){
            v1.push_back(v[i]);
        }
        ListNode*root=new ListNode(v1[0]);
        ListNode* temp1=root;
        for(int i=1;i<v1.size();i++){
            temp1->next=new ListNode(v1[i]);
            temp1=temp1->next;
        }
        return root;
    }
};