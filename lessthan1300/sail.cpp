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
  int t, sx, sy, ex, ey;
  cin>>t>>sx>>sy>>ex>>ey;
  string dirs;
  cin>>dirs;
  v32 need (4, 0);
  int total = 0;
  if (ex >= sx) {
    need[2] += ex - sx;
    total += ex - sx;
  } else {
    need[3] += sx - ex;
    total += sx - ex;
  }
  if (ey >= sy) {
    need[0] += ey - sy;
    total += ey - sy;
  } else {
    need[1] += sy - ey;
    total += sy - ey;
  }
  for (int i = 0; i < dirs.length(); i++) {
    if (dirs[i] == 'N') {
      if (need[0] > 0) {
        need[0]--;
        total--;
        if (total == 0) {
          cout << i + 1 << '\n';
          return 0;
        }
      }
    } else if (dirs[i] == 'S') {
      if (need[1] > 0) {
        need[1]--;
        total--;
        if (total == 0) {
          cout << i + 1 << '\n';
          return 0;
        }
      }
    } else if (dirs[i] == 'E') {
      if (need[2] > 0) {
        need[2]--;
        total--;
        if (total == 0) {
          cout << i + 1 << '\n';
          return 0;
        }
      }
    } else {
      if (need[3] > 0) {
        need[3]--;
        total--;
        if (total == 0) {
          cout << i + 1 << '\n';
          return 0;
        }
      }
    }
  }
  cout << "-1" << '\n';
  return 0;
}