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
  int a, b, c;
  cin>>a>>b>>c;
  v32 arr (1000001, 1);
  for (int i = 2; i <= a * b * c; i++) {
    int curr = i;
    while (curr <= a * b * c) {
      arr[curr]++;
      curr += i;
    }
  }
  long long res = 0;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      for (int k = 1; k <= c; k++) {
        res += arr[i * j * k];
      }
    }
  }
  long long md = pow(2, 30);
  cout << res % md << '\n';
  return 0;
}