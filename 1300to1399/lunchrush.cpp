#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, k;
  cin>>n>>k;
  long long res = -1e9;
  while (n--) {
    long long f, t;
    cin>>f>>t;
    if (t > k) {
      res = max(res, f - (t - k));
    } else {
      res = max(res, f);
    }
  }
  cout << res << '\n';

  return 0;
}