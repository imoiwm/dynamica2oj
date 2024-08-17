#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  double n, y;
  int x;
  cin>>n>>x>>y;
  double res = n * (y / 100);
  if ((double)x >= res) {
    cout << 0 << '\n';
    return 0;
  }
  if (res != (int)res) {
    cout << (int)(res - x) + 1 << '\n';
  } else {
    cout << (int)(res - x)<< '\n';
  }
  return 0;
}