#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, k;
  cin>>n>>k;
  vector<int> arr (n, 0);
  int curr = k / n;
  for (int i = 0; i < n - 1; i++) {
    arr[i] = curr;
    k -= curr;
  }
  arr[n - 1] = k;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      cout << arr[(i + j) % n] << ' ';
    }
    cout << arr[(i + (n - 1)) % n] << '\n';
  }
  return 0;
}