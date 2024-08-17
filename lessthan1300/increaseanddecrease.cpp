#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  int total = 0;
  cin>>n;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    total += temp;
  }
  int md = total % n;
  if (md == 0) {
    cout << n << '\n';
  } else {
    cout << n - 1 << '\n';
  }
  return 0;
}