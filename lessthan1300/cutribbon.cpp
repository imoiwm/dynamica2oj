#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b, c;
  cin>>n>>a>>b>>c;
  if (a > n) {
    a = n;
  }
  if (b > n) {
    b = n;
  }
  if (c > n) {
    c = n;
  }
  vector<int> dp (n + 1);
  dp[a] = 1;
  dp[b] = 1;
  dp[c] = 1;
  for (int i = 1; i <= n; i++) {
    if (i - a >= 0 && dp[i - a] != 0) {
      dp[i] = max(dp[i], dp[i - a] + 1);
    }
    if (i - b >= 0 && dp[i - b] != 0) {
      dp[i] = max(dp[i], dp[i - b] + 1);
    }
    if (i - c >= 0 && dp[i - c] != 0) {
      dp[i] = max(dp[i], dp[i - c] + 1);
    }
  }
  cout << dp[n] << '\n';
  return 0;
}