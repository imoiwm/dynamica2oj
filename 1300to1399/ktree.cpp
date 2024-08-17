#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, k, d;
  cin>>n>>k>>d;
  int md = 1000000007;
  vector<long long> dp (n - d + 2, 0);
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i < dp.size(); i++) {
    for (int j = 0; j < i; j++) {
      dp[i] += dp[j];
    }
  }
  long long res = 0;
  for (int i = n - d; i >= 0; i--) {
    res += dp[i];
    res = res % md;
  }
  cout << res % md << '\n';
  return 0;
}