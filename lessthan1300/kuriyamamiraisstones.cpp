#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  vector<long long> arr (n);
  vector<long long> st (n);
  long long total = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    total += temp;
    arr[i] = total;
    st[i] = temp;
  }
  sort(st.begin(), st.end());
  for (int i = 1; i < n; i++) {
    st[i] += st[i - 1];
  }
  int m;
  cin>>m;
  while (m--) {
    int type;
    cin>>type;
    if (type == 1) {
      int l, r;
      cin>>l>>r;
      long long res = arr[r - 1];
      if (l > 1) {
        res -= arr[l - 2];
      }
      cout << res << '\n';
    } else {
      int l, r;
      cin>>l>>r;
      long long res = st[r - 1];
      if (l > 1) {
        res -= st[l - 2];
      }
      cout << res << '\n';
    }
  }
  return 0;
}