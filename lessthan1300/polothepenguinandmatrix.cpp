#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, m, d;
  cin>>n>>m>>d;
  vector<int> arr;
  int md = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int temp;
      cin>>temp;
      int curr = temp % d;
      int divd = temp / d;
      if (md == -1) {
        md = curr;
      } else if (md != curr) {
        cout << "-1" << '\n';
        return 0;
      }
      arr.push_back(divd);
    }
  }
  sort(arr.begin(), arr.end());
  int val;
  if ((n * m) % 2 == 0) {
    val = (arr[(n * m) / 2] + arr[((n * m) / 2) - 1]) / 2;
  } else {
    val = arr[(n * m) / 2];
  }
  i64 res = 0;
  for (auto num : arr) {
    res += abs(val - num);
  }
  cout << res << '\n';
  return 0;
}