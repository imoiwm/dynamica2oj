#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int a, b;
  cin>>a>>b;
  if (a == b) {
    cout << 0 << '\n';
    return 0;
  }
  vector<int> af (3, 0);
  vector<int> bf (3, 0);
  while (a > 1) {
    if (a % 2 == 0) {
      af[0]++;
      a /= 2;
    } else if (a % 3 == 0) {
      af[1]++;
      a /= 3;
    } else if (a % 5 == 0) {
      af[2]++;
      a /= 5;
    } else {
      break;
    }
  }
  while (b > 1) {
    if (b % 2 == 0) {
      bf[0]++;
      b /= 2;
    } else if (b % 3 == 0) {
      bf[1]++;
      b /= 3;
    } else if (b % 5 == 0) {
      bf[2]++;
      b /= 5;
    } else {
      break;
    }
  }
  if (a != b) {
    cout << -1 << '\n';
    return 0;
  }
  int res = 0;
  for (int i = 0; i < 3; i++) {
    res += abs(af[i] - bf[i]);
  }
  cout << res << '\n';
  return 0;
}