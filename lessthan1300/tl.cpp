#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin>>n>>m;
  int mn = 1e9, mx = -1e9;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    mn = min(mn, temp);
    mx = max(mx, temp);
  }
  int tl = max(mn * 2, mx);
  for (int i = 0; i < m; i++) {
    int temp;
    cin>>temp;
    if (temp <= tl) {
      cout << "-1" << '\n';
      return 0;
    }
  }
  cout << tl << '\n';
  return 0;
}