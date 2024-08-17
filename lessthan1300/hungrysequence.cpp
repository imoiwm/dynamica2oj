#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

void solve() {
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int i = pow(10, 7);
    vector<int> arr (n);
    while (n--) {
        arr[n] = i;
        i--;
    }
    for (int i = 0; i < arr.size() - 1; i++) {
        cout << arr[i] << ' ';
    }
    cout << arr.back() << '\n';
    return 0;
}