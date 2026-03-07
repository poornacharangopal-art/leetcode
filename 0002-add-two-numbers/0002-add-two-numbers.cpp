/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }; ,,,,,,,,,,,,,
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long num1=0,num2=0;
        ListNode*p=l1;
        int l=0;
        vector<int>v1,v2;
        while(p!=NULL){
            v1.push_back(p->val);
            p=p->next;
        }
        p=l2;
         while(p!=NULL){
             v2.push_back(p->val);
            p=p->next;
         }
         int L1=v1.size();
         int L2=v2.size();
         vector<int>v3;
         if(L1<L2){
            for(int i=0;i<L2;i++){
                int sum=l;
                if(i<L1){
                    sum+=v1[i]+v2[i];
                }
                else{
                    sum+=v2[i];
                }
                if(i==L2-1&&sum>=10){
                    v3.push_back(sum-10);
                    v3.push_back(1);
                    break;
                }
                if(sum>=10){
                    sum=sum-10;
                    l=1;
                }
                else{
                    l=0;
                }
                v3.push_back(sum);
            }
         }
         if(L1>L2){
             for(int i=0;i<L1;i++){
                int sum=l;
                if(i<L2){
                    sum+=v1[i]+v2[i];
                }
                else{
                    sum+=v1[i];
                }
                if(i==L1-1&&sum>=10){
                    v3.push_back(sum-10);
                    v3.push_back(1);
                    break;
                }
                if(sum>=10){
                    sum=sum-10;
                    l=1;
                }
                else{
                    l=0;
                }
                v3.push_back(sum);
            }
         }
         if(L1==L2){
            for(int i=0;i<L1;i++){
                int sum=l;
                sum+=v1[i]+v2[i];
                if(i==L1-1&&sum>=10){
                    v3.push_back(sum-10);
                    v3.push_back(1);
                    break;
                }
                if(sum>=10){
                    sum=sum-10;
                    l=1;
                }
                else{
                    l=0;
                }
                v3.push_back(sum);
            }
         }
        ListNode*result=new ListNode(v3[0]);
        ListNode*p1=result;
        for(int i=1;i<v3.size();i++){
            p1->next=new ListNode(v3[i]);
            p1=p1->next;
        }
        return result;
    }

};
        