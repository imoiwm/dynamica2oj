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
  int a = 0, b = 0, both = 0;
  while (n--) {
    int val1, val2;
    cin>>val1>>val2;
    if (val1 % 2 == 1) {
      if (val2 % 2 == 0) {
        a++;
      } else {
        both++;
      }
    } else if (val2 % 2 == 1) {
      b++;
    }
  }
  if (both % 2 == 1) {
    if (a % 2 == 1 && b % 2 == 1) {
      cout << "0" << '\n';
      return 0;
    } else if (a % 2 == 0 && b % 2 == 0 && a + b > 0) {
      cout << "1" << '\n';
    } else {
      cout << "-1" << '\n';
      return 0;
    }
  } else {
    if (a % 2 == 0 && b % 2 == 0) {
      cout << "0" << '\n';
      return 0;
    } else if ((a + b) % 2 == 1) {
      cout << "-1" << '\n';
      return 0;
    } else {
      cout << "1" << '\n';
      return 0;
    }
  }
  return 0;
}