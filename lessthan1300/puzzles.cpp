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
    v32 arr(m);
    for (int i = 0; i < m; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int res = 1e9;
    for (int i = 0; i <= m - n; i++) {
        res = min(res, arr[i + n - 1] - arr[i]);
    }
    cout << res << '\n';
    return 0;
}