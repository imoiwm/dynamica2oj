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
    int s, n;
    cin>>s>>n;
    vector<pair<int, int>> arr (n);
    for (int i = 0; i < n; i++) {
        int val, add;
        cin>>val>>add;
        arr[i] = make_pair(val, add);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (s > arr[i].first) {
            s += arr[i].second;
        } else {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}