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
  long long minseen = 1000000001;
  int count = 1;
  int res = 0;
  for (int i = 0; i < n; i++) {
    long long temp;
    cin>>temp;
    if (minseen == temp) {
      count++;
    } else if (minseen > temp) {
      minseen = temp;
      count = 1;
      res = i + 1;
    }
  }
  if (count > 1) {
    cout << "Still Rozdil" << '\n';
  } else {
    cout << res << '\n';
  }
  return 0;
}