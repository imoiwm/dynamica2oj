#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, k;
  cin>>n>>k;
  vector<int> arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    if (i >= k - 1 && arr[i] != arr[k - 1]) {
      cout << "-1" << '\n';
      return 0;
    }
  }
  int count = 0;
  int idx = k - 2;
  while (idx >= 0 && arr[idx] == arr[k - 1]) {
    count++;
    idx--;
  }
  cout << (k - 1) - count << '\n';
  return 0;
}