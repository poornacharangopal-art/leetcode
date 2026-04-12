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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         vector<int>v1,v2;
    ListNode* temp=l1;
    while(temp!=NULL){
        v1.push_back(temp->val);
        temp=temp->next;
    }
    temp=l2;
     while(temp!=NULL){
        v2.push_back(temp->val);
        temp=temp->next;
    }
    int n=max(v1.size(),v2.size());
    int m=min(v1.size(),v2.size());
    vector<int>v3(n,0);
        if(v2.size()>v1.size()){
            for(int i=n-1;i>=0;i--){
                if(i>=n-m){
                v3[i]+=v1[i-n+m]+v2[i];
                }
                else
                v3[i]+=v2[i];
                if(i!=0&&v3[i]>=10){
                    v3[i]=v3[i]-10;
                    v3[i-1]+=1;
                }
                if(i==0&&v3[i]>=10){
                    v3[i]-=10;
                    v3.insert(v3.begin(),1);
                }
            }
        }
         else if(v2.size()<v1.size()){
            for(int i=n-1;i>=0;i--){
                if(i>=n-m){
                v3[i]+=v1[i]+v2[i-n+m];
                }
                else
                v3[i]+=v1[i];
                if(i!=0&&v3[i]>=10){
                    v3[i]=v3[i]-10;
                    v3[i-1]+=1;
                }
                   if(i==0&&v3[i]>=10){
                    v3[i]-=10;
                    v3.insert(v3.begin(),1);
                }
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                v3[i]+=v1[i]+v2[i];
                if(i!=0&&v3[i]>=10){
                    v3[i]-=10;
                    v3[i-1]+=1;
                }
                   if(i==0&&v3[i]>=10){
                    v3[i]-=10;
                    v3.insert(v3.begin(),1);
                }
            }
        }
    ListNode* root=new ListNode(v3[0]);
     temp=root;
    for(int i=1;i<v3.size();i++){
        temp->next=new ListNode(v3[i]);
        temp=temp->next;
    }
    return root;
        
    }
};