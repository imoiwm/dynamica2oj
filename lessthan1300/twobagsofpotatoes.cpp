#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int y, k, n;
  cin>>y>>k>>n;
  vector<int> arr;
  int curr = ((y / k) + 1) * k;
  while (curr <= n) {
    arr.push_back(curr - y);
    curr += k;
  }
  if (arr.size() == 0) {
    cout << "-1" << '\n';
    return 0;
  }
  for (auto val : arr) {
    cout << val << ' ';
  }
  cout << '\n';
  return 0;
}