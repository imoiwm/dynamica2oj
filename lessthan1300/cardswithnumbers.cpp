#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ifstream inp;
  inp.open("input.txt");
  ofstream outp;
  outp.open("output.txt");
  int n;
  inp>>n;
  n *= 2;
  int idx = 1;
  unordered_map<int, vector<int>> idxs;
  while (n--) {
    int temp;
    inp>>temp;
    idxs[temp].push_back(idx);
    idx++;
  }
  vector<pair<int, int>> res;
  for (auto p : idxs) {
    if (p.second.size() % 2 == 0) {
      for (int i = 0; i < p.second.size(); i += 2) {
        res.push_back(make_pair(p.second[i], p.second[i + 1]));
      }
    } else {
      outp << "-1" << '\n';
      return 0;
    }
  }
  for (auto p : res) {
    outp << p.first << ' ' << p.second << '\n';
  }
  return 0;
}