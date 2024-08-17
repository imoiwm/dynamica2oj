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
  v32 a (n);
  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }
  int m;
  cin>>m;
  v32 b (m);
  for (int i = 0; i < m; i++) {
    cin>>b[i];
  }
  int mr = 0;
  int res = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i] % a[j] == 0) {
        if (b[i] / a[j] > mr) {
          res = 1;
          mr = b[i] / a[j];
        } else if (b[i] / a[j] == mr) {
          res++;
        }
      }
    }
  }
  cout << res << '\n';
  return 0;
}