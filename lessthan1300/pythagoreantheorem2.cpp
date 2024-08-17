#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  long long res = 0;
  for (int a = 1; a * a <= (n * n / 2); a++) {
    for (int b = a; b * b <= n * n; b++) {
      int c = (a * a) + (b * b);
      int sq = sqrt(c);
      if (sq * sq == c && c <= n * n) {
        res++;
      }
    }
  }
  cout << res << '\n';
  return 0;
}