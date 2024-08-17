#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  string s;
  cin>>s;
  int count = 0;
  char curr = s[0];
  string res = "";
  vector<pair<int, char>> chunk;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == curr) {
      count++;
    } else {
      chunk.push_back({count, curr});
      curr = s[i];
      count = 1;
    }
  }
  chunk.push_back({count, curr});
  if (chunk[0].first >= 2) {
    chunk[0] = {2, chunk[0].second};
    res += chunk[0].second;
    res += chunk[0].second;
  } else {
    res += chunk[0].second;
  }
  for (int i = 1; i < chunk.size(); i++) {
    if (chunk[i].first >= 2) {
      if (chunk[i - 1].first == 2) {
        res += chunk[i].second;
        chunk[i] = {1, chunk[i].second};
      } else {
        chunk[i] = {2, chunk[i].second};
        res += chunk[i].second;
        res += chunk[i].second;
      }
    } else {
      res += chunk[i].second;
      chunk[i] = {1, chunk[i].second};
    }
  }
  cout << res << '\n';
  return 0;
}