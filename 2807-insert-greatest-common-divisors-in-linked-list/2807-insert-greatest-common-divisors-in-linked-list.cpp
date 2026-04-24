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
    int gcd(int a, int b) {
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        ListNode*root=new ListNode();
        ListNode* temp1=root;
        while(temp->next!=NULL){
            temp1->next=new ListNode(temp->val);
            temp1=temp1->next;
            int a=temp->val;
            int b=temp->next->val;
            int c=gcd(a,b);
            temp1->next=new ListNode(c);
            temp1=temp1->next;
            temp=temp->next;
        }
        temp1->next=new ListNode(temp->val);
        root=root->next;
        return root;
    }
};