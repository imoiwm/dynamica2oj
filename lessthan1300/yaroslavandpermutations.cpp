#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  unordered_map<int, int> count;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    count[temp]++;
  }
  for (auto p : count) {
    if (p.second > (n + 1) / 2) {
      cout << "NO" << '\n';
      return 0;
    }
  }
  cout << "YES" << '\n';
  return 0;
}