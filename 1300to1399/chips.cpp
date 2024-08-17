#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, m;
  cin>>n>>m;
  int total = 0;
  for (int i = 1; i <= n; i++) {
    total += i;
  }
  int dvd = m / total;
  m -= dvd * total;
  int idx = 1;
  while (m >= idx) {
    m -= idx;
    idx++;
  }
  cout << m << '\n';
  return 0;
}