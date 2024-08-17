#include <bits/stdc++.h>

using namespace std; 
   
typedef long long ll; 
typedef long double ld; 
typedef pair<int,int> p32; 
typedef pair<ll,ll> p64; 
typedef pair<double,double> pdd; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
typedef vector<vector<int> > vv32; 
typedef vector<vector<ll> > vv64; 
typedef vector<vector<p64> > vvp64; 
typedef vector<p64> vp64; 
typedef vector<p32> vp32; 

int main() {
  int count;
  cin >> count;
  int x = 0, y = 0, z = 0;
  int curr;
  for (int i = 0; i < count; i++) {
    cin >> curr;
    x += curr;

    cin >> curr;
    y += curr;

    cin >> curr;
    z += curr;
  }
  if (x == 0 && y == 0 && z == 0) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}