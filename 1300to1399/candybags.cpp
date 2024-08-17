#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  int sq = n * n;
  int curr = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j += 2) {
      cout << curr << ' ' << sq << ' ';
      curr++;
      sq--;
    }
    cout << '\n';
  }
  return 0;
}