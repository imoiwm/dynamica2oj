#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, m;
  cin>>n>>m;
  vector<int> colors (n + 1, 0);
  vector<int> wrb (4, 0);
  int total = 0;
  while (m--) {
    wrb[1] = 0;
    wrb[2] = 0;
    wrb[3] = 0;
    total = 0;
    int a, b, c;
    cin>>a>>b>>c;
    if (colors[a] != 0) {
      wrb[colors[a]] = 1;
      total++;
    }
    if (colors[b] != 0) {
      wrb[colors[b]] = 1;
      total++;
    }
    if (colors[c] != 0) {
      wrb[colors[c]] = 1;
      total++;
    }
    if (colors[a] == 0) {
      for (int i = 1; i < 4; i++) {
        if (wrb[i] == 0) {
          colors[a] = i;
          wrb[i] = 1;
          total++;
          break;
        }
      }
    }
    if (colors[b] == 0) {
      for (int i = 1; i < 4; i++) {
        if (wrb[i] == 0) {
          colors[b] = i;
          wrb[i] = 1;
          total++;
          break;
        }
      }
    }
    if (colors[c] == 0) {
      for (int i = 1; i < 4; i++) {
        if (wrb[i] == 0) {
          colors[c] = i;
          wrb[i] = 1;
          total++;
          break;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << colors[i] << ' ';
  }
  return 0;
}