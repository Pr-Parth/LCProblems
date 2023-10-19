#include<bits/stdc++.h>
using namespace std;
  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        ListNode *one = head;
        ListNode *two = head;

        while(k--){
                two=two->next;
        }

        if(two==NULL){
            return one->next;
        }

        while(two->next != NULL){
            one= one->next;
            two= two->next;
        }

        one-> next = one->next->next;
        return head;
        
        
    }
};