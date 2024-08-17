#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  unordered_set<int> s;
  vector<int> arr = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  for (auto val : arr) {
    int temp = val;
    while (temp <= 1000) {
      s.insert(temp);
      temp += val;
    }
  }
  if (s.find(n) != s.end()) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}