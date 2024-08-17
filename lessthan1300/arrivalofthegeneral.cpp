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
  int n;
  cin >> n;
  int curr;
  int mx = -1e9, mn = 1e9;
  int xidx = 1e9, nidx = -1e9;
  for (int i = 0; i < n; i++) {
    cin >> curr;
    if (curr > mx) {
      mx = curr;
      xidx = i;
    }
    if (curr <= mn) {
      mn = curr;
      nidx = i;
    }
  }
  int res = (n - nidx - 1) + xidx;
  if (nidx < xidx) {
    res--;
  }
  cout << res << '\n';
  return 0;
}