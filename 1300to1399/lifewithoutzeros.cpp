#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  string a, b, s;
  cin>>a>>b;
  long long oldx = 0, oldy = 0, res = 0, newx = 0, newy = 0;
  oldx = stoi(a);
  oldy = stoi(b);
  for (int i = 0; i < a.length(); i++) {
    if (a[i] != '0') {
      newx *= 10;
      newx += (a[i] - '0');
    }
  }
  for (int i = 0; i < b.length(); i++) {
    if (b[i] != '0') {
      newy *= 10;
      newy += (b[i] - '0');
    }
  }
  long long add = oldx + oldy;
  s = to_string(add);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != '0') {
      res *= 10;
      res += (s[i] - '0');
    }
  }
  //cout << res << ' ' << oldx << ' ' << oldy << ' ' << newx << ' ' << newy << '\n';
  if (res == newx + newy) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}