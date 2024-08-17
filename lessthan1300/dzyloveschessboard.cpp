#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

set<pair<int, int>> seen;
int n, m;
vector<vector<char>> arr;

void solve(int i, int j) {
  stack<pair<int, int>> s;
  seen.insert(make_pair(i, j));
  vector<vector<int>> diffs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  s.push(make_pair(i, j));
  while (s.size() > 0) {
    pair<int, int> curr = s.top();
    s.pop();
    if (arr[curr.first][curr.second] == '.') {
      for (auto d : diffs) {
        int newr = curr.first + d[0], newc = curr.second + d[1];
        if (newr >= 0 && newr < n && newc >= 0 && newc < m && arr[newr][newc] != '-') {
          if (arr[newr][newc] == 'B') {
            arr[curr.first][curr.second] = 'W';
          } else if (arr[newr][newc] == 'W') {
            arr[curr.first][curr.second] = 'B';
          }
          pair<int, int> check = make_pair(newr, newc);
          if (seen.find(check) == seen.end()) {
            s.push(check);
            seen.insert(check);
          }
        }
      }
      if (arr[curr.first][curr.second] == '.') {
        arr[curr.first][curr.second] = 'B';
      }
    }
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    arr.push_back(vector<char>(m));
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == '.') {
        solve(i, j);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j];
    }
    cout<<'\n';
  }
  return 0;
}