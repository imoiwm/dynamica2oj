#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

void solve() {
}

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.first > b.first || (a.first == b.first && a.second < b.second);
} 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin>>n>>k;
  vector<pair<int, int>> arr;
  while (n--) {
    int a, b;
    cin>>a>>b;
    arr.push_back(make_pair(a, b));
  }
  sort(arr.begin(), arr.end(), sortbysecdesc);
  int count = 1;
  int start = 0;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i].first != arr[i - 1].first || arr[i].second != arr[i - 1].second) {
      if (k > start && k <= start + count) {
        cout << count << '\n';
        return 0;
      }
      start = i;
      count = 1;
    } else {
      count++;
    }
  }
  cout << count << '\n';
  return 0;
}