#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  vector<int> arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  int add;
  if (arr[0] == 1) {
    add = -1;
  } else {
    add = 1;
  }
  int curr = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) {
      curr++;
    } else {
      curr--;
    }
    add = max(add, curr);
    if (curr < 0) {
      curr = 0;
    }
  }
  cout << accumulate(arr.begin(), arr.end(), 0) + add << '\n';
  return 0;
}