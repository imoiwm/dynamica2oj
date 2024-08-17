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
  unordered_map<string, int> scores;
  for (int i = 0; i < n; i++) {
    string temp;
    cin>>temp;
    scores[temp]++;
  }
  int res = 0;
  string winner;
  for (auto p : scores) {
    if (p.second > res) {
      winner = p.first;
      res = p.second;
    }
  }
  cout << winner << '\n';
  return 0;
}