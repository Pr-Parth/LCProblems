#include<bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;


        ListNode *finalHead = NULL;
        
        if(l1->val < l2->val){
            finalHead = l1;
            l1 = l1 -> next;
        }
        else{
            finalHead = l2;
            l2 = l2 -> next;
        }

        ListNode *p = finalHead;

        while(l1 && l2){
            if(l1->val < l2->val){
                p->next =l1;
                l1= l1->next;
            }
            else{
                p->next= l2;
                l2=l2->next;
            }
            p=p->next;
            
        }
        if(l1){
            p->next = l1;
        }        
        else{
            p->next = l2;
        }
        return finalHead;
    }
};