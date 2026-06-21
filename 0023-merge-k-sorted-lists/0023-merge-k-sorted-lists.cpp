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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        if(lists.size()==1&&lists[0]==NULL){
            return NULL;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>v;
        for(int i=0;i<lists.size();i++){
            if(lists[i]==NULL){
                continue;
            }
            ListNode* temp1=lists[i];
            while(temp1!=NULL){
                pq.push(temp1->val);
                temp1=temp1->next;
            }
        }
        if(pq.size()==0){
            return NULL;
        }
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        ListNode* root=new ListNode(v[0]);
        ListNode* temp=root;
        for(int i=1;i<v.size();i++){
            temp->next=new ListNode(v[i]);
            temp=temp->next;
        }
        return root;
           
    }
};