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
  string add;
  cin >> add;
  vector<char> nums;
  for (int i = 0; i < add.length(); i++) {
    if (add[i] != '+') {
      nums.push_back(add[i]);
    }
  }
  sort(nums.begin(), nums.end());
  string res = "";
  for (int i = 0; i < nums.size() - 1; i++) {
    res += nums[i];
    res += '+';
  }
  res += nums.back();
  cout << res << '\n';
  return 0;
}