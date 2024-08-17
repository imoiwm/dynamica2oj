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
  int goal;
  cin>>goal;
  if (goal == 0) {
    cout << "0 0 0" << '\n';
    return 0;
  }
  if (goal == 1) {
    cout << "1 0 0" << '\n';
    return 0;
  }
  int prevprevprev = 0;
  int prevprev = 0;
  int prev = 1;
  int curr = 1;
  while (curr < goal) {
    prevprevprev = prevprev;
    prevprev = prev;
    prev = curr;
    curr = prevprev + prev;
  }
  cout << prevprevprev << ' ' << prevprev << ' ' << prevprev << '\n';
  return 0;
}