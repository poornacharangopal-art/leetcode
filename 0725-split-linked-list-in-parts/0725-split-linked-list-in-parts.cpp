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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode*temp=head;
        int lenght=0;
        while(temp!=NULL){
            lenght++;
            temp=temp->next;
        }
        vector<ListNode*>v;
        int l=lenght/k;
        int r=lenght%k;
        int i=0;
         ListNode* temp1=head;
         for(int i=0;i<k;i++){
            ListNode*root=temp1;
            ListNode*temp2=NULL;
            int size=l+((r>0)?1:0);
            if(r>0){
                r--;
            }
            for(int j=0;j<size;j++){
                temp2=temp1;
                if(temp1!=NULL)
                temp1=temp1->next;
            }
            if(temp2!=NULL){
                temp2->next=NULL;
            }
            v.push_back(root);
         }
        return v;
    }
};