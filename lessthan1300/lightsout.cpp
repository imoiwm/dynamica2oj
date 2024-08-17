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
  vv32 diffs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {0, 0}};
  vv32 lights (3, v32 (3, 1));
  int press;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> press;
      for (auto d : diffs) {
        if (i + d[0] >= 0 && i + d[0] < 3 && j + d[1] >= 0 && j + d[1] < 3) {
          lights[i + d[0]][j + d[1]] += press;
        }
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << lights[i][j] % 2;
    }
    cout << '\n';
  }
  return 0;
}