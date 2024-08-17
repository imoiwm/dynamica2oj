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
  vv32 hap (5, v32 (5));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin>>hap[i][j];
    }
  }
  int res = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        for (int l = 0; l < 5; l++) {
          for (int m = 0; m < 5; m++) {
            unordered_set<int> s;
            s.insert(i);
            s.insert(j);
            s.insert(k);
            s.insert(l);
            s.insert(m);
            if (s.size() == 5) {
              int curr = hap[i][j] + hap[j][i] + hap[j][k] + hap[k][j] + (hap[k][l] * 2) + (hap[l][k] * 2) + (hap[l][m] * 2) + (hap[m][l] * 2);
              res = max(res, curr);
            }
          }
        }
      }
    }
  }
  cout << res << '\n';
  return 0;
}