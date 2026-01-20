#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    string t;
    for (char ch : s) {
      if (ch == '(') {
        t.push_back(')');
      } else if (ch == '[') {
        t.push_back(']');
      } else if (ch == '{') {
        t.push_back('}');
      } else if (t.empty() || t.back() != ch) {
        return false;
      } else {
        t.pop_back();
      }
    }
    return t.empty();
  }
};
