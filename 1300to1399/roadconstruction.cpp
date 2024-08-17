#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n, m;
  cin>>n>>m;
  vector<int> blocks (n + 1, 0);
  for (int i = 0; i < m; i++) {
    int temp, temp2;
    cin>>temp>>temp2;
    blocks[temp]++;
    blocks[temp2]++;
  }
  int center = -1;
  for (int i = 1; i <= n; i++) {
    if (blocks[i] == 0) {
      center = i;
      break;
    }
  }
  cout << n - 1 << '\n';
  for (int i = 1; i <= n; i++) {
    if (i != center) {
      cout << center << ' ' << i << '\n';
    }
  }
  return 0;
}