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
  ifstream inp("input.txt");
  ofstream outp("output.txt");
  int n, m;
  inp>>n>>m;
  if (n > m) {
    while (n > 0 && m > 0) {
      outp << "BG";
      n--;
      m--;
    }
  } else {
    while (n > 0 && m > 0) {
      outp << "GB";
      n--;
      m--;
    }
  }
  if (n) {
    for (int i = 0; i < n; i++) {
      outp << "B";
    }
  } else {
    for (int i = 0; i < m; i++) {
      outp << "G";
    }
  }
  return 0;
}