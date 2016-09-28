// Uva12230过河问题  均匀分布 的数学期望求解
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

int main() {
  freopen("", "r", stdin);
  freopen("", "w", stdout);

  int n, D, p, L, v, kase = 0;
  while (scanf("%d%d", &n, &D) == 2 && D) {
    double ans = 0;
    while (n--) {
      scanf("%d%d%d", &p, &L, &v);
      D -= L;
      ans += 2.0 * L / v;
    }
    printf("Case %d: %.3lf\n\n", ++kase, ans + D);
  }
  return 0;
}
