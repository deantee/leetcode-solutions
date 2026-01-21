#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};
#endif

class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* dummy{new ListNode};
    ListNode* tmp = dummy;
    while (list1 && list2) {
      ListNode** t = list1->val <= list2->val ? &list1 : &list2;
      tmp = tmp->next = *t;
      *t = (*t)->next;
    }
    ListNode** t = list1 ? &list1 : &list2;
    while (*t) {
      tmp = tmp->next = *t;
      *t = (*t)->next;
    }
    tmp = dummy->next;
    delete dummy;
    return tmp;
  }
};
