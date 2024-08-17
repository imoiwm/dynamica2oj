#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin>>s;
  if (s == "0" || s == "1") {
    cout << "0" << '\n';
    return 0;
  }
  int idx = -1;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '0') {
      idx = i;
      break;
    }
  }
  if (idx == -1) {
    cout << s.substr(1) << '\n';
    return 0;
  }
  for (int i = 0; i < s.length(); i++) {
    if (i != idx) {
      cout << s[i];
    }
  }
  cout << '\n';
  return 0;
}