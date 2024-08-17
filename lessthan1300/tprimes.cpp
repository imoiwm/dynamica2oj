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
  unordered_set<long long> tp;
  while (n--) {
    long long temp;
    cin>>temp;
    if (tp.find(temp) != tp.end()) {
      cout << "YES" << '\n';
    } else if (temp == 1) {
      cout << "NO" << '\n';
    } else { 
      long long root = sqrt(temp);
      if (root * root == temp) {
        bool flag = true;
        for (int i = 2; i <= sqrt(root); i++) {
          if (i * (root / i) == root) {
            cout << "NO" << '\n';
            flag = false;
            break;
          }
        }
        if (flag) {
          cout << "YES" << '\n';
          tp.insert(temp);
        }
      } else {
        cout << "NO" << '\n';
      }
    }
  }
  return 0;
}