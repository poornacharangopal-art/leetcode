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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<ListNode*>v;
        while(head!=NULL){  
            if(head->next!=NULL&&head->val==head->next->val){
                while(head->next!=NULL&&head->val==head->next->val){
                    head=head->next;
                }
            }
            else{
                v.push_back(head);
            }
            head=head->next;
        }
        ListNode*newhead=NULL;
        ListNode*tail=NULL;
        for(int i=0;i<v.size();i++){
            if(newhead==NULL){
                newhead=new ListNode(v[i]->val);
                tail=newhead;
            }
            else{
                tail->next=new ListNode(v[i]->val);
                tail=tail->next;
            }
        }
        return newhead;
    }
};