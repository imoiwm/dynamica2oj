#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  int curr = 0;
  for (int i = 0; i < k; i++) {
    curr += arr[i];
  }
  int res = curr;
  int idx = 1;
  for (int i = 0; i < n - k; i++) {
    curr += arr[i + k] - arr[i];
    if (curr < res) {
      idx = i + 2;
      res = curr;
    }
  }
  cout << idx << '\n';
  return 0;
}