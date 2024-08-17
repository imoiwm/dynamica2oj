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
  vv32 arr (100001, v32(0));
  vv32 res;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    arr[temp].push_back(i);
  }
  for (int i = 0; i < 100001; i++) {
    if (arr[i].size() > 0) {
      if (arr[i].size() == 1) {
        res.push_back({i, 0});
      } else {
        int check = arr[i][1] - arr[i][0];
        bool flag = true;
        for (int j = 2; j < arr[i].size(); j++) {
          if (arr[i][j] - arr[i][j - 1] != check) {
            flag = false;
            break;
          }
        }
        if (flag) {
          res.push_back({i, check});
        }
      }
    }
  }
  cout << res.size() << '\n';
  for (auto vec : res) {
    cout << vec[0] << ' ' << vec[1] << '\n';
  }
  return 0;
}