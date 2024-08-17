#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  int l = 1e9, r = -1e9;
  int prev = 1000001;
  vector<vector<int>> sc;
  while (n--) {
    int temp;
    cin>>temp;
    if (prev == 1000001) {
      prev = temp;
    } else {
      for (auto vec : sc) {
        if ((prev > vec[0] && prev < vec[1] && (temp > vec[1] || temp < vec[0])) || ((prev > vec[1] || prev < vec[0]) && temp > vec[0] && temp < vec[1])) {
          cout << "yes" << '\n';
          return 0;
        }
      }
      sc.push_back({min(prev, temp), max(prev, temp)});
      prev = temp;
    }
  }
  cout << "no" << '\n';
  return 0;
}