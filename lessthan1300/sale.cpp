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
  int res = 0;
  cin>>n>>m;
  v32 arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < m; i++) {
    if (arr[i] <= 0) {
      res += arr[i];
    }
  }
  cout << res * -1 << '\n';
  return 0;
}