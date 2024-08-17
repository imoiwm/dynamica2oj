#include <bits/stdc++.h>

using namespace std;

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  vector<vector<int>> opens (1001, vector<int>(1001, 0));
  vector<int> totalo (1001, 0);
  vector<int> totalob (1001, 0);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin>>a>>b;
    opens[a][b]++;
    totalo[a]++;
    totalob[b]++;
  }
  int res = 0;
  for (int i = 0; i < 1001; i++) {                         
    if (totalo[i] != 0) {
      if (totalob[i] > 1) {
        res += totalo[i];
      } else if (opens[i][i] == 1) {
        res += totalo[i] - 1;
      } else if (totalob[i] != 0) {
        res += totalo[i];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
      }
    }
  }
  cout << n - res << '\n';
  return 0;
}