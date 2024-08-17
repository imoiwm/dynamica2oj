#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  string s, t;
  cin>>s>>t;
  if (s.length() != t.length()) {
    cout << "NO" << '\n';
    return 0;
  }
  vector<char> diffs, difft;
  int diff = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != t[i]) {
      diff++;
      diffs.push_back(s[i]);
      difft.push_back(t[i]);
    }
  }
  if (diff != 2) {
    cout << "NO" << '\n';
    return 0;
  }
  if (diffs[0] != difft[1] || diffs[1] != difft[0]) {
    cout << "NO" << '\n';
    return 0;
  }
  cout << "YES" << '\n';
  return 0;
}