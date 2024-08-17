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
  string s;
  cin>>s;

  v32 a;
  v32 b;
  int l = 0, g = 0;
  for (int i = 0; i < n; i++) {
    a.push_back(s[i] - '0');
  }
  for (int i = n; i < s.length(); i++) {
    b.push_back(s[i] - '0');
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0; i < a.size(); i++) {
    if (a[i] < b[i]) {
      l++;
    } else if (a[i] > b[i]) {
      g++;
    } else {
      cout << "NO" << '\n';
      return 0;
    }
  }
  if (g == a.size() || l == a.size()) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}