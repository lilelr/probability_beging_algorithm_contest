
//条件概率
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define LL long long
const int maxn = 1000;

int f[31], g[31];

int main() {
  //    freopen("", "r", stdin);
  //    freopen("", "w", stdout);
  f[0] = f[1] = f[2] = 0;
  g[0] = 1, g[1] = 2, g[2] = 4;
  for (int n = 3; n <= 30; n++) {
    f[n] = 1 << (n - 3);
    for (int i = 2; i <= n - 2; i++) {
      f[n] += g[i - 2] * (1 << (n - i - 2));
    }
    g[n] = (1 << n) - f[n];
  }
  int n;
  while (cin >> n && n) {
    cout << f[n] << "\n";
  }
  return 0;

  return 0;
}
