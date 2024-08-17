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
  int n, t;
  string line;
  cin >> n;
  cin >> t;
  cin >> line;
  int offset = 0;
  vector<char> res (line.begin(), line.end());
  for (int i = 0; i < t; i++) {
    int idx = 0;
    while (idx < n - 1) {
      if (res[idx] == 'B') {
        if (res[idx + 1] == 'G') {
          swap(res[idx], res[idx + 1]);
          idx++;
        }
      }
      idx++;
    }
  }
  for (auto val : res) {
    cout << val;
  }
  cout << '\n';
  return 0;
}