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
  string s;
  cin>>s;
  int zeros = 0;
  int ones = 0;
  for (auto c : s) {
    if (c == '1') {
      ones++;
      zeros = 0;
    } else {
      zeros++;
      ones = 0;
    }
    if (ones >= 7 || zeros >= 7) {
      cout << "YES" << '\n';
      return 0;
    }
  }
  cout << "NO" << '\n';
  return 0;
}