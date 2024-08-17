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
  vector<int> arr (n);
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  long long res = 0;
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) {
    res += abs(arr[i] - (i + 1));
  }
  cout << res << '\n';
  return 0;
}