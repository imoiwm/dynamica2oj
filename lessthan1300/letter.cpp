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
  string s, t;
  getline(cin, s, '\n');
  getline(cin, t, '\n');
  unordered_map<char, int> counts;
  for (auto c : s) {
    counts[c]++;
  }
  for (auto c : t) {
    if (c != ' ' && (counts[c] == 0 || counts.find(c) == counts.end())) {
      cout << "NO" << '\n';
      return 0;
    }
    counts[c]--;
  }
  cout << "YES" << '\n';
  return 0;
}