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
  unordered_map<char, int> count;
  for (auto c : s) {
    count[c]++;
  }
  int res = 0;
  int mid = 0;
  for (auto p : count) {
    if (p.second % 2 == 1) {
      if (mid <= p.second) {
        res += mid;
        mid = p.second;
      } else {
        res += p.second;
      }
    }
  }
  if (res % 2 == 1) {
    cout << "Second" << '\n';
  } else {
    cout << "First" << '\n';
  }
  return 0;
}