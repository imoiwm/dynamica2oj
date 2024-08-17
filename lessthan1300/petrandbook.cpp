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
  int pages;
  cin>>pages;
  v32 arr (7, 0);
  for (int i = 0; i < 7; i++) {
    cin>>arr[i];
  }
  int idx = 0;
  while (pages > 0) {
    pages -= arr[idx % 7];
    idx++;
  }
  cout << ((idx - 1) % 7) + 1 << '\n';
  return 0;
}