#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> arr (26, vector<int>(2, 0));
  string s;
  cin>>s;
  long long res = 0;
  for (int i = 0; i < 26; i++) {
    arr[i][1] = i;
  }
  for (auto c : s) {
    int idx = c - 'A';
    arr[idx][0]++;
  }
  long long curr;
  sort(arr.begin(), arr.end());
  int idx = 25;
  while (k > 0) {
    if (k >= arr[idx][0]) {
      k -= arr[idx][0];
      curr = arr[idx][0];
      curr *= arr[idx][0];
      res += curr;
    } else {
      curr = k;
      curr *= k;
      res += curr;
      k = 0;
    }
    idx--;
  }
  cout << res << '\n';
  return 0;
}