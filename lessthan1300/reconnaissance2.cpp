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
  int diff = 1e9;
  int a, b;
  int firstval = 0;
  cin>>firstval;
  int prev = firstval;
  for (int i = 1; i < n; i++) {
    int temp;
    cin>>temp;
    if (abs(temp - prev) < diff) {
      a = i + 1;
      b = i;
      diff = abs(temp - prev);
    }
    prev = temp;
  }
  if (abs(prev - firstval) < diff) {
    a = n;
    b = 1;
    cout << n << ' ' << '1' << '\n';
    return 0;
  }
  cout << a << ' ' << b << '\n';
  return 0;
}