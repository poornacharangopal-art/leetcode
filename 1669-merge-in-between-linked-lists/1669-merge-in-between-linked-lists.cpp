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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* temp1=list2;
        int l=0;
        while(l!=a-1){
            temp=temp->next;
            l++;
        }
        ListNode* temp2=list1;
        ListNode* temp3=list2;
        int l1=0;
        while(l1!=b){
            temp2=temp2->next;
            l1++;
        }
        while(temp3->next!=NULL){
            temp3=temp3->next;
        }
        if(temp2->next!=NULL)
        temp3->next=temp2->next;
        temp->next=temp1;
        return list1;
    }
};