#include <bits/stdc++.h>

using namespace std;

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  unordered_map<int, int> count;
  int res = 0;
  while (n--) {
    int a, b;
    cin>>a>>b;
    count[(a * 100) + b]++;
    res = max(res, count[(a * 100) + b]);
  }
  cout << res << '\n';
  return 0;
}