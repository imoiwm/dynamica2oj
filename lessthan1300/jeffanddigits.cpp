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
  int fives = 0, zeros = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    if (temp == 5) {
      fives++;
    } else {
      zeros++;
    }
  }
  if (zeros == 0) {
    cout << "-1" << '\n';
    return 0;
  }
  int total = fives * 5;
  while (total > 0) {
    if (total % 9 == 0) {
      for (int i = 0; i < total / 5; i++) {
        cout << '5';
      }
      for (int i = 0; i < zeros; i++) {
        cout << '0';
      }
      return 0;
    }
    total -= 5;
  }
  cout << "0" << '\n';
  return 0;
}