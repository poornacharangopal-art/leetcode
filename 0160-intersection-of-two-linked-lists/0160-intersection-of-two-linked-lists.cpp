/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int i=0,j=0;
        int countA=0,countB=0;
        ListNode* temp=headA;
        ListNode* temp1=headB;
        while(temp!=NULL){
            countA++;
            temp=temp->next;
        }
         while(temp1!=NULL){
            countB++;
            temp1=temp1->next;
        }
        if(countA>countB){
            temp=headA;
            temp1=headB;
            while(temp!=NULL&&temp1!=NULL){
                if(i<countA-countB){
                    i++;
                    temp=temp->next;
                }
                else{
                    i++;
                    j++;
                      if(temp->next==NULL||temp1->next==NULL){
                        if(temp->val!=temp1->val){
                            return NULL;
                        }
                    }
                    if(temp1==temp){
                        return temp;
                    }
                    temp=temp->next;
                    temp1=temp1->next;
                }
            }
        }
        else{
             temp=headA;
            temp1=headB;
            while(temp!=NULL&&temp1!=NULL){
                if(j<countB-countA){
                    j++;
                    temp1=temp1->next;
                }
                else{
                    i++;
                    j++;
                       if(temp->next==NULL||temp1->next==NULL){
                        if(temp->val!=temp1->val){
                            return NULL;
                        }
                    }
                    if(temp1==temp){
                        return temp;
                    }
                    temp=temp->next;
                    temp1=temp1->next;
                }
            }
        }
            return NULL;
        }
};