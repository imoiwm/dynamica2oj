#include "bits/stdc++.h"

using namespace std;
using i64 = long long; 

int main() {
  string s;
  cin>>s;
  if (s.length() == 1) {
    cout << 0 << '\n';
    return 0;
  }
  int temp = 1e9;
  int res = 0;
  while (s.length() != 1) {
    temp = 0;
    for (auto c : s) {
      temp += (c - '0');
    }
    s = to_string(temp);
    res++;
  }
  cout << res << '\n';
  return 0;
}