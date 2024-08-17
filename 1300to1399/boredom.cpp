#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  unordered_map<long long, long long> count;
  int sz = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    count[temp]++;
    sz = max(sz, temp);
  }
  vector<long long> dp (sz + 1, 0);
  if (count.find(1) != count.end()) {
    dp[1] = count[1];
  }
  if (sz >= 2) {
    if (count.find(2) != count.end()) {
      long long temp = count[2] * 2;
      dp[2] = max(dp[1], temp);
    } else {
      dp[2] = dp[1];
    }
  }
  for (long long i = 3; i <= sz; i++) {
    long long temp = 0;
    if (count.find(i) != count.end()) {
      temp = count[i] * i;
    }
    dp[i] = max(dp[i], dp[i - 1]);
    dp[i] = max(dp[i], dp[i - 2] + temp);
    dp[i] = max(dp[i], dp[i - 3] + temp);
  }
  cout << dp[sz] << '\n';
  return 0;
}