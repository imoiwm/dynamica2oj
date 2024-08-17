#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, t;
  cin>>n>>t;
  vector<int> arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  if (accumulate(arr.begin(), arr.end(), 0) <= t) {
    cout << n << '\n';
    return 0;
  }
  int total = 0;
  int l = 0, r = 0, res = 0;
  while (r < arr.size()) {
    if (total <= t) {
      res = max(res, r - l);
      total += arr[r];
      r++;
    } else {
      total -= arr[l];
      l++;
    }
  }
  while (total > t) {
    total -= arr[l];
    l++;
  }
  res = max(res, r - l);
  cout << res << '\n';
  return 0;
}