#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  long long x, y;
  cin>>x>>y;
  vector<long long> sq = {x, y, y - x, x * -1, y * -1, (y * -1) + x};
  int n;
  cin>>n;
  n = (n - 1) % 6;
  int md = 1000000007;
  int div = sq[n] / md;
  if (sq[n] < 0) {
    cout << ((md  + (sq[n] - (md * div))) % md) << '\n';
  } else {
    cout << sq[n] - (div * md) << '\n';
  }
  return 0;
}