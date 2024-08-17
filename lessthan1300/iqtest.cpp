#include <bits/stdc++.h>

using namespace std; 
   
using i64 = long long;

void solve() {
}

int main() {
  vector<vector<int>> paper (4, vector<int>(4));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      char temp;
      cin>>temp;
      if (temp == '.') {
        paper[i][j] = 1;
      } else {
        paper[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int total = paper[i][j] + paper[i + 1][j] + paper[i][j + 1] + paper[i + 1][j + 1];
      if (total == 0 || total == 4 || total == 1 || total == 3) {
        cout << "YES" << '\n';
        return 0;
      }
    }
  }
  cout << "NO" << '\n';
  return 0;
}