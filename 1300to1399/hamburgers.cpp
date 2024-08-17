#include <bits/stdc++.h>

using namespace std;
using i64 = long long; 

int main() {
  string s;
  int nb, ns, nc;
  int pb, ps, pc;
  long long rubles;
  cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>rubles;
  int needb = 0, needs = 0, needc = 0;
  for (auto c : s) {
    if (c == 'B') {
      needb++;
    } else if (c == 'S') {
      needs++;
    } else {
      needc++;
    }
  }
  long long total = 0;
  int orig = 1e9;
  if (needb > 0) {
    orig = min(orig, nb / needb);
  }
  if (needc > 0) {
    orig = min(orig, nc / needc);
  }
  if (needs > 0) {
    orig = min(orig, ns / needs);
  }
  nb -= (orig * needb);
  nc -= (orig * needc);
  ns -= (orig * needs);
  total = orig;
  long long curr = rubles / ((needb * pb) + (needc * pc) + (needs * ps));
  total += curr;
  rubles -= curr;
  int leftover = ((needb - nb) * pb) + ((needc - nc) * pc) + ((needs - ns) * ps);
  if (nb == 0 && nc == 0 && ns == 0) {
    leftover = 0;
  }
  cout << leftover << '\n';
  if (leftover <= rubles && leftover > 0) {
    total += rubles / leftover;
  }
  cout << total << '\n';
  return 0;
}