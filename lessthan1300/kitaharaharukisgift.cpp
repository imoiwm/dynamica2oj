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
  int n;
  cin>>n;
  int t = 0, o = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    if (temp == 100) {
      o++;
    } else {
      t++;
    }
  }
  if (t % 2 == 0 && o % 2 == 0) {
    cout << "YES" << '\n';
  } else if (t % 2 == 1 && o % 2 == 0) {
    if (o >= 2) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}