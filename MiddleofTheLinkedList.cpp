#include<bits/stdc++.h>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution{
public:
    ListNode *middlenode(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head->next;
    
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast != NULL){
            return slow->next;
        }
    return slow;
    }
};