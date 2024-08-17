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
  int a, b, c;
  cin>>a>>b>>c;
  int res = 0;
  for (int i = 1; i <= a; i++) {
    int curr = a / i;
    if (i * curr == a && i * (b / curr) == c) {
      res = i + curr + (b / curr);
      break;
    }
  }
  cout << 4 * res << '\n';
  return 0;
}