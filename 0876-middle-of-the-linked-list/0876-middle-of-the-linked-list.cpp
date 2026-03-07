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
    ListNode* middleNode(ListNode* head) {
       ListNode*l=head;
       int count=0;
       while(l!=NULL){
        l=l->next;
        count+=1;
       }
       int n;
       if(count%2==0){
        n=count/2;
       } 
       else{
        n=count/2;
       }
       l=head;
       while(n>0){
        l=l->next;
        n--;
       }
       return l;
    }
};