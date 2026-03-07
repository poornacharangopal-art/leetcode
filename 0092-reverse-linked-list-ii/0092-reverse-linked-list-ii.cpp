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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode*l=head;
        while(l!=NULL){
            v.push_back(l->val);
            l=l->next;
        }
        if(v.size()==0){
            return NULL;
        }
        vector<int>v1(right-left+1);
        if(left==right){
            v1=v;
        }
        else{
        for(int i=left-1;i<right;i++){
            v1[i-(left-1)]=v[i];
        }
        reverse(v1.begin(),v1.end());
          for(int i=left-1;i<right;i++){
            v[i]=v1[i-(left-1)];
        }
        }
        ListNode*result=new ListNode(v[0]);
        ListNode*l1=result;
        for(int i=1;i<v.size();i++){
            l1->next=new ListNode(v[i]);
            l1=l1->next;
        }
        return result;
    }
};