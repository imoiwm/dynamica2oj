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
  cin>>n;
  v32 x (n);
  v32 y (n);
  v32 up (n);
  v32 down (n);
  v32 left (n);
  v32 right (n);
  for (int i = 0; i < n; i++) {
    cin>>x[i]>>y[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (x[i] == x[j] && y[i] < y[j]) {
        up[i]++;
        down[j]++;
      } else if (x[i] == x[j] && y[i] > y[j]) {
        up[j]++;
        down[i]++;
      } else if (x[i] < x[j] && y[i] == y[j]) {
        right[i]++;
        left[j]++;
      } else if (x[i] > x[j] && y[i] == y[j]) {
        right[j]++;
        left[i]++;
      }
    }
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    if (up[i] > 0 && down[i] > 0 && left[i] > 0 && right[i] > 0) {
      res++;
    }
  }
  cout << res << '\n';
  return 0;
}