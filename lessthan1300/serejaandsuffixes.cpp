#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin>>n>>m;
  vector<int> arr (n);
  unordered_set<int> s;
  vector<int> uniq (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    s.insert(arr[i]);
    uniq[i] = s.size();
  }
  for (int i = 0; i < m; i++) {
    int temp;
    cin>>temp;
    cout << uniq[temp - 1] << '\n';
  }
  cout << '\n';
  return 0;
}