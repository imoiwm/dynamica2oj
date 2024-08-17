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
  int k;
  cin>>k;
  string s;
  cin>>s;
  string res = "";
  unordered_map<char, int> count;
  for (auto c : s) {
    count[c]++;
  }
  for (auto p : count) {
    if (p.second % k != 0) {
      cout << "-1" << '\n';
      return 0;
    }
  }
  for (int i = 0; i < k; i++) {
    for (auto p : count) {
      for (int j = 0; j < p.second / k; j++) {
        res += p.first;
      }
    }
  }
  cout << res << '\n';
  return 0;
}