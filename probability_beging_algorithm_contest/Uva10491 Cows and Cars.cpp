// UVa10491 Cows and Cars
// Rujia Liu  全概率公式，分成若干部分分别计算概率，全部累加起即为总的概率
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=850&page=show_problem&problem=1432
#include <cstdio>
int main() {
  int a, b, c;
  while (scanf("%d%d%d", &a, &b, &c) == 3)
    printf("%.5lf\n",
           (double)(a * b + b * (b - 1)) / (a + b) / (a + b - c - 1));
  return 0;
}
