////均匀分布 数学期望
////全期望公式，把所有情况不重复、不遗漏分成若干类，每类计算数学期望，然后按照每类的概率加权求和
//// UVa12230 Crossing Rivers
//// Rujia Liu
//#include <cstdio>
//int main() {
//  //  int n, D, p, L, v, kase = 0;
//  //  while (scanf("%d%d", &n, &D) == 2 && D) {
//  //    double ans = 0;
//  //    while (n--) {
//  //      scanf("%d%d%d", &p, &L, &v);
//  //      D -= L;
//  //      ans += 2.0 * L / v;
//  //    }
//  //    printf("Case %d: %.3lf\n\n", ++kase, ans + D);
//  //  }
//  int n, D, p, L, v, kcase = 0;
//  while (scanf("%d%d", &n, &D) == 2 && D) {
//    double ans = 0;
//    while (n--) {
//      scanf("%d%d%d", &p, &L, &v);
//      D -= L;
//      ans += 2.0 * L / v;
//    }
//    printf("Case %d: %.3lf\n\n", ++kcase, ans + D);
//  }
//  return 0;
//}
