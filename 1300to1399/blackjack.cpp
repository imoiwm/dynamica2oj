#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int n;
  cin>>n;
  if (n <= 10 || n > 21) {
    cout << "0" << '\n';
    return 0;
  }
  if (n == 20) {
    cout << "15" << '\n';
    return 0;
  }
  cout << "4" << '\n';
  return 0;
}