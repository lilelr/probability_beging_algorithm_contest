// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=850&page=show_problem&problem=3185
//用递推法 计算排列组合，经典
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
const int MOD = 10056;
int C[maxn + 1][maxn + 1], f[maxn + 1];

// 递推出所有组合数
void init() {
  for (int i = 0; i <= maxn; i++) {
    C[i][0] = C[i][i] = 1;
    for (int j = 1; j < i; j++) {
      C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
    }
  }
}

int main() {
  //    freopen("", "r", stdin);
  //    freopen("", "w", stdout);
  init();
  f[0] = 1;
  for (int i = 1; i <= maxn; i++) {
    f[i] = 0;
    for (int j = 1; j <= i; j++) {
      f[i] = (f[i] + C[i][j] * f[i - j]) % MOD; // 递推
    }
  }

  int T, n;
  scanf("%d", &T);

  for (int kcase = 1; kcase <= T; kcase++) {
    scanf("%d", &n);
    printf("Case %d: %d\n", kcase, f[n]);
  }

  return 0;
}
