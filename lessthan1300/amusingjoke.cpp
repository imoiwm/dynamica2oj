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
  unordered_map<char, int> names;
  string s;
  cin>>s;
  for (auto c : s) {
    names[c]++;
  }
  cin>>s;
  for (auto c : s) {
    names[c]++;
  }
  cin>>s;
  for (auto c : s) {
    names[c]--;
    if (names[c] == 0) {
      names.erase(c);
    } else if (names[c] < 0) {
      cout << "NO" << '\n';
      return 0;
    }
  }
  if (names.empty()) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}