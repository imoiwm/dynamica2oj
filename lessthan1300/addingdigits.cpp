#include <bits/stdc++.h>

using namespace std;

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a,b,n;
  cin>>a>>b>>n;
  int curr = a % b;
  string res = to_string(a);
  while (n--) {
    curr *= 10;
    curr = curr % b;
    if (curr == 0) {
      res += '0';
    } else if ((b - curr) < 10) {
      res += '0' + (b - curr);
      curr = 0;
    } else {
      cout << "-1" << '\n';
      return 0;
    }
  }
  cout << res << '\n';
  return 0;
}