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
  unordered_map<int, int> count;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    count[temp]++;
  }
  bool flag = false;
  if (count[1] == count[4] + count[6]) {
    if (count[4] <= count[2] && count[6] == (count[2] - count[4]) + count[3]) {
      if (count.find(5) == count.end() && count.find(7) == count.end()) {
        flag = true;
      }
    }
  }
  if (!flag) {
    cout << "-1" << '\n';
    return 0;
  }
  for (int i = 0; i < count[3]; i++) {
    cout << "1 3 6" << '\n';
  }
  for (int i = 0; i < count[6] - count[3]; i++) {
    cout << "1 2 6" << '\n';
  }
  for (int i = 0; i < count[4]; i++) {
    cout << "1 2 4" << '\n';
  }
  return 0;
}