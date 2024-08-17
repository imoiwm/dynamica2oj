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
  int n, m;
  cin>>n>>m;
  int pos = 1;
  long long res = 0;
  for (int i = 0; i < m; i++) {
    int temp;
    cin>>temp;
    if (pos != temp) {
      if (pos > temp) {
        res += (n - pos) + temp;
      } else {
        res += temp - pos;
      }
      pos = temp;
    }
  }
  cout << res << '\n';
  return 0;
}