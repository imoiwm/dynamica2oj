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
  int year;
  cin >> year;
  for (int i = year + 1; i < 9013; i++) {
    string curr = to_string(i);
    unordered_set<char> s (curr.begin(), curr.end());
    if (s.size() == 4) {
      cout << i << '\n';
      break;
    }
  }
  return 0;
}