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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* root=new ListNode();
        ListNode* temp1=root;
        ListNode*temp=head->next;
        int sum=0;
        while(temp!=NULL){
            sum+=temp->val;
            if(temp->val==0){
                temp1->next=new ListNode(sum);
                temp1=temp1->next;
                sum=0;
            }
            temp=temp->next;
        }
        root=root->next;
        return root;
    }
};