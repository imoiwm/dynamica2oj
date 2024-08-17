#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int r, g, b;
  cin>>r>>g>>b;
  int res = 0;
  int mixed = min(r, g);
  mixed = min(mixed, b);
  res += mixed;
  r -= mixed;
  g -= mixed;
  b -= mixed;
  while (r >= 3) {
    res++;
    r -= 3;
  }
  while (g >= 3) {
    res++;
    g -= 3;
  }
  while (b >= 3) {
    res++;
    b -= 3;
  }
  int twos = 0;
  if (r == 2) {
    twos++;
  }
  if (g == 2) {
    twos++;
  }
  if (b == 2) {
    twos++;
  }
  if (twos == 2 && mixed > 0) {
    res++;
  }
  cout << res << '\n';
  return 0;
}