#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  string a, b;
  cin>>a>>b;
  int onesa = 0, onesb = 0;
  for (auto c : a) {
    if (c == '1') {
      onesa++;
    }
  }
  for (auto c : b) {
    if (c == '1') {
      onesb++;
    }
  }
  if (a.length() == b.length()) {
    if (onesa > 0 && onesb > 0) {
      cout << "YES" << '\n';
    } else if (onesa == 0 && onesb == 0) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}