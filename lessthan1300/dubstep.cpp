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
  string curr = "";
  string res = "";
  int idx = 0;
  while (idx < s.length()) {
    if (idx + 2 < s.length() && s[idx] == 'W' && s[idx + 1] == 'U' && s[idx + 2] == 'B') {
      if (res.back() != ' ') {
        res += " ";
      }
      res += curr;
      idx += 3;
      curr = "";
    } else {
      curr += s[idx];
      idx++;
    } 
  }
  if (res.back() != ' ') {
    res += " ";
  }
  res += curr;
  res = res.substr(1);
  cout << res << '\n';
  return 0;
}