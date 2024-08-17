#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  if (a*d < b*c) {
    int p = (b * c) - (d * a), q = b * c;
    int s = p, t = q;
    while (s != t) {
      if (s < t) {
        t -= s;
      } else {
        s -= t;
      }
    }
    p /= s;
    q /= s;
    cout << p << '/' << q << '\n';
  } else if (a*d > b*c) {
    int p = (a * d) - (c * b), q = a * d;
    int s = p, t = q;
    while (s != t) {
      if (s < t) {
        t -= s;
      } else {
        s -= t;
      }
    }
    p /= s;
    q /= s;
    cout << p << '/' << q << '\n';
  } else {
    cout << "0/1" << '\n';
  }
  return 0;
}