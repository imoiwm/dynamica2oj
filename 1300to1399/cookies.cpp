#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  vector<int> arr (n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    total += arr[i];
  }
  int res = 0;
  for (auto val : arr) {
    if ((total - val) % 2 == 0) {
      res++;
    }
  }
  cout << res << '\n';
  return 0;
}