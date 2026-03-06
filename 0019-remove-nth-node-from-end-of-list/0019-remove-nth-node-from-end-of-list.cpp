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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){
            count+=1;
            temp=temp->next;
        }
        if(count==n){
            return head->next;
        }
        int i=count-n;
        temp=head;
        for(int k=1;k<i;k++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};