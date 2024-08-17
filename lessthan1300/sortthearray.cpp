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
  vector<int> compa (n);
  int start = 1e9, end = -1e9;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    compa[i] = arr[i];
  }
  sort(compa.begin(), compa.end());
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != compa[i]) {
      start = min(start, i);
      end = max(end, i);
    }
  }
  if (start == 1e9) {
    cout << "yes" << '\n';
    cout << "1 1" << '\n';
    return 0;
  }
  for (int i = 0; i <= end - start; i++) {
    if (arr[start + i] != compa[end - i]) {
      cout << "no" << '\n';
      return 0;
    }
  }
  cout << "yes" << '\n';
  cout << start + 1 << ' ' << end + 1 << '\n';
  return 0;
}