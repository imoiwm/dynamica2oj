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
  long long mn = 1e9, mx = -1e9, cn = 0, cx = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    if (temp < mn) {
      mn = temp;
      cn = 1;
    } else if (temp == mn) {
      cn++;
    }
    if (temp > mx) {
      mx = temp;
      cx = 1;
    } else if (temp == mx) {
      cx++;
    }
  }
  if (mx != mn) {
    cout << mx - mn << ' ' << cn * cx << '\n';
  } else {
    long long count = 0;
    for (int i = 1; i < cx; i++) {
      count += i;
    }
    cout << "0 " << count << '\n';
  }
  return 0;
}