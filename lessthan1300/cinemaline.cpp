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
  int tf = 0, ft = 0, hun = 0;
  while (n--) {
    int temp;
    cin>>temp;
    int change = temp - 25;
    if (temp == 25) {
      tf++;
    } else if (temp == 50) {
      ft++;
    } else {
      hun++;
    }
    if (change == 25) {
      if (tf > 0) {
        tf--;
      } else {
        cout << "NO" << '\n';
        return 0;
      }
    } else if (change == 75) {
      if (tf > 0 && ft > 0) {
        tf--;
        ft--;
      } else if (tf > 2) {
        tf -= 3;
      } else {
        cout << "NO" << '\n';
        return 0;
      }
    }
  }
  cout << "YES" << '\n';
  return 0;
}