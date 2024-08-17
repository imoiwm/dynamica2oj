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
  int n, m;
  cin>>n>>m;
  priority_queue<int> maxseats;
  priority_queue<int, v32, greater<int>>minseats;
  for (int i = 0; i < m; i++) {
    int temp;
    cin>>temp;
    minseats.push(temp);
    maxseats.push(temp);
  }
  int minres = 0, maxres = 0;
  for (int i = 0; i < n; i++) {
    int temp = maxseats.top();
    maxseats.pop();
    maxres += temp;
    temp--;
    if (temp != 0) {
      maxseats.push(temp);
    }

    temp = minseats.top();
    minseats.pop();
    minres += temp;
    temp--;
    if (temp != 0) {
      minseats.push(temp);
    }
  }
  cout << maxres << ' ' << minres << '\n';
  return 0;
}