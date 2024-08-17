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
  string word;
  int u = 0, l = 0;
  cin >> word;
  for (auto c : word) {
    if (isupper(c)) {
      u++;
    } else {
      l++;
    }
  }
  string res = "";
  if (l >= u) {
    for (auto c : word) {
      res += tolower(c);
    }
  } else {
    for (auto c : word) {
      res += toupper(c);
    }
  }
  cout << res << '\n';
  return 0;
}