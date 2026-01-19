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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *p0{head}, *p1{head};
    for (int i{}; i < n; ++i) {
      p1 = p1->next;
    }
    if (p1 == NULL) {
      return head->next;
    }
    while (p1->next != NULL) {
      p1 = p1->next;
      p0 = p0->next;
    }
    p0->next = p0->next->next;
    return head;
  }
};
