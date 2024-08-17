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
  string s;
  cin>>s;
  int ones = 0;
  int fours = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '4') {
      if (ones == 0 && fours == 0) {
        cout << "NO" << '\n';
        return 0;
      }
      fours++;
      ones = 0;
    } else {
      fours = 0;
      ones++;
    }
    if (fours > 2 || (s[i] != '1' && s[i] != '4')) {
      cout << "NO" << '\n';
      return 0;
    }
  }
  cout << "YES" << '\n';
  return 0;
}