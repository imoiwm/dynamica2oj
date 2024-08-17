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
  int k;
  cin>>k;
  v32 arr(12);
  for (int i = 0; i < 12; i++) {
    cin>>arr[i];
  }
  if (accumulate(arr.begin(), arr.end(), 0) < k) {
    cout << "-1" << '\n';
    return 0;
  }
  sort(arr.begin(), arr.end());
  int total = 0;
  int idx = 11;
  while (total < k) {
    total += arr[idx--];
  }
  cout << 12 - idx - 1 << '\n';
  return 0;
}