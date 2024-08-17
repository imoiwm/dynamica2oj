#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int x, y;
  cin>>x>>y;
  int x1, y1, x2, y2;
  if (x > 0 && y > 0) {
    cout << 0 << ' ' << x + y << ' ' << x + y << ' ' << 0 << '\n';
  } else if (x < 0 && y > 0) {
    cout << (abs(x) + y) * -1 << ' ' << 0 << ' ' << 0 << ' ' << abs(x) + y << '\n';
  } else if (x < 0 && y < 0) {
    cout << (abs(x) + abs(y)) * -1 << ' ' << 0 << ' ' << 0 << ' ' << (abs(x) + abs(y)) * -1 << '\n';
  } else {
    cout << 0 << ' ' << (x + abs(y)) * -1 << ' ' << x + abs(y) << ' ' << 0 << '\n';
  }
  return 0;
}