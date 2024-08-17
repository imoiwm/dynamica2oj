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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (2 * n) - (i * 2); j++) {
            cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            cout << j << ' ';
        }
        cout << i;
        for (int j = i - 1; j >= 0; j--) {
            cout << ' ' << j;
        }
        cout << '\n';
    }

    for (int i = 0; i < n; i++) {
        cout << i << ' ';
    }
    cout << n;
    for (int i = n - 1; i >= 0; i--) {
        cout << ' ' << i;
    }
    cout << '\n';
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < (2 * n) - (i * 2); j++) {
            cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            cout << j << ' ';
        }
        cout << i;
        for (int j = i - 1; j >= 0; j--) {
            cout << ' ' << j;
        }
        cout << '\n';
    }
    return 0;
}