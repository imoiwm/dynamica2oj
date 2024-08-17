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
  long long n, k;
  cin>>n>>k;
  long long mid = (n + 1) / 2;
  long long res;
  if (k > mid) {
    res = 2 * (k - mid);
  } else {
    res = 2 * k - 1;
  }
  cout << res << '\n';
  return 0;
}