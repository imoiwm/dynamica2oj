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
  string num;
  cin >> num;
  unsigned long long count = 0;
  for (auto c : num) {
    if (c == '4' || c == '7') {
      count++;
    }
  }
  bool flag = false;
  string check = to_string(count);
  for (auto c : check) {
    if (c != '4' && c != '7') {
      cout << "NO" << '\n';
      flag = true;
      break;
    }
  }
  if (!flag) {
    cout << "YES" << '\n';
  }
  return 0;
}