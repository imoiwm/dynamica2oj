#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, m;
  cin>>n>>m;
  unordered_set<int> r;
  unordered_set<int> c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char curr;
      cin>>curr;
      if (curr == 'S') {
        r.insert(i);
        c.insert(j);
      }
    }
  }
  int res = 0;
  int rcount = 0;
  for (int i = 0; i < n; i++) {
    if (r.find(i) == r.end()) {
      res += m;
      rcount++;
    }
  }
  for (int i = 0; i < m; i++) {
    if (c.find(i) == c.end()) {
      res += n - rcount;
    }
  }
  cout << res << '\n';
  return 0;
}