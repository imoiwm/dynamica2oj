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
  int res = 0;
  int n;
  cin >> n;
  string stones;
  cin >> stones;
  stack<char> curr;
  for (auto c : stones) {
    if (curr.size() > 0 && curr.top() == c) {
      res += 1;
    } else {
      curr.push(c);
    }
  }
  cout << res << '\n';
  return 0;
}