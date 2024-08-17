#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  vector<vector<int>> res (3, vector<int>());
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    if (temp == 0) {
      res[2].push_back(temp);
    } else if (temp > 0) {
      res[1].push_back(temp);
    } else {
      res[0].push_back(temp);
    }
  }
  if (res[1].size() == 0) {
    res[1].push_back(res[0].back());
    res[0].pop_back();
    res[1].push_back(res[0].back());
    res[0].pop_back();
  }
  if (res[0].size() % 2 == 0) {
    res[2].push_back(res[0].back());
    res[0].pop_back();
  }
  for (auto vec : res) {
    cout << vec.size() << ' ';
    for (auto val : vec) {
      cout << val << ' ';
    }
    cout << '\n';
  }
  return 0;
}