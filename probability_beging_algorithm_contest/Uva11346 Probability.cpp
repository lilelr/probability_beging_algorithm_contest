//// 数形结合求概率 双曲线
//// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=850&page=show_problem&problem=2321
//// UVa11346 Probability
//// Rujia Liu
//#include <cmath>
//#include <cstdio>
//int main() {
//  int T;
//  scanf("%d", &T);
//  while (T--) {
//    double a, b, s, ans;
//    scanf("%lf%lf%lf", &a, &b, &s);
//    double m = a * b;
//    if (fabs(s) < 1e-6)
//      ans = 1;
//    else if (s > m)
//      ans = 0;
//    else
//      ans = (m - s - s * log(m / s)) / m;
//    printf("%.6lf%%\n", ans * 100);
//  }
//  return 0;
//}
