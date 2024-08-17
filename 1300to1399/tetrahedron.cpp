#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  int md = 1000000007;
  vector<vector<long long>> dp (2, vector<long long>(n + 1, 0));
  dp[0][1] = 1;

  for (int i = 2; i <= n; i++) {
    dp[1][i] += dp[0][i - 1] * 3;
    dp[1][i] = dp[1][i] % md;
    dp[0][i] += dp[1][i - 1] + (dp[0][i - 1] * 2);
    dp[0][i] = dp[0][i] % md;
  }
  cout << dp[1][n] % md << '\n';
}