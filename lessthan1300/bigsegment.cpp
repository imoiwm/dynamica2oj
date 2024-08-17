#include <bits/stdc++.h>

using namespace std;

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  int left = 1e9, right = -1e9;
  vector<vector<int>> arr (n, vector<int>(3));
  for (int i = 0; i < n; i++) {
    cin>>arr[i][0]>>arr[i][1];
    arr[i][2] = i + 1;
    left = min(left, arr[i][0]);
    right = max(right, arr[i][1]);
  }
  sort(arr.begin(), arr.end());
  int idx = 0;
  while (arr[idx][0] <= left) {
    if (arr[idx][1] >= right) {
      cout << arr[idx][2] << '\n';
      return 0;
    }
    idx++;
  }
  cout << "-1" << '\n';
  return 0;
}