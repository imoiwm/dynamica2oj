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
  v32 primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  int n, m;
  cin >> n;
  cin >> m;
  for (int i = 0; i < primes.size(); i++) {
    if (primes[i] == n) {
      if (primes[i + 1] == m) {
        cout << "YES" << '\n';
      } else {
        cout << "NO" << '\n';
      }
      break;
    }
  }
  return 0;
}