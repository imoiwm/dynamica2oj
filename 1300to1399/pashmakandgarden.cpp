#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  if (y2 - y1 == 0) {
    cout << x1 << ' ' << y1 + (x2 - x1) << ' ' << x2 << ' ' << y1 + (x2 - x1) << '\n';
  } else if (x2 - x1 == 0) {
    cout << x1 + (y2 - y1) << ' ' << y1 << ' ' << x1 + (y2 - y1) << ' ' << y2 << '\n';
  } else if (abs(x2 - x1) == abs(y2 - y1)) {
    cout << x2 << ' ' << y1 << ' ' << x1 << ' ' << y2 << '\n';
  } else {
    cout << -1 << '\n';
  }
  return 0;
}