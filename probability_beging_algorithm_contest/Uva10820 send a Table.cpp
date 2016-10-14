//// 欧拉函数， 求小于n且与n互素的整数的个数
//// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=850&page=show_problem&problem=1761
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <string>
//#include <vector>
//using namespace std;
//#define LL long long
//const int maxn = 50000;
//int phi[maxn + 1];
//int phi_psum[maxn + 1];
//
//// 计算欧拉函数，利用与筛选素数的类似方法，phi[n] 表示 1~n
//// 之间与n互为素数的个数，O（nloglogn)
//void phi_table(int n) {
//  phi[1] = 0;
//  for (int i = 2; i <= n; i++) {
//    if (phi[i] == 0) { // 只有质数才会phi[i] == 0,非质数的j
//      // 的phi[j]在下面的循环中已被提前赋值
//      for (int j = i; j <= n; j += i) {
//        // f(n) = n*（1 - 1/p1）*(1 - 1/p2)*...*(1 - 1/pk)
//        if (phi[j] == 0) {
//          phi[j] = j;
//        }
//        phi[j] = phi[j] / i * (i - 1); // attention
//                                       //          phi[j] = phi[j] * (i - 1) /i;
//      }
//    }
//  }
//}
//
//int main() {
//  freopen("/Users/yuxiao/XcodeProject/probability_beging_algorithm_contest/"
//          "probability_beging_algorithm_contest/in",
//          "r", stdin);
//  freopen("/Users/yuxiao/XcodeProject/probability_beging_algorithm_contest/"
//          "probability_beging_algorithm_contest/out",
//          "w", stdout);
//  int n;
//  phi_table(maxn);
//  phi_psum[0] = 0;
//  for (int i = 1; i <= maxn; i++) {
//    phi_psum[i] = phi_psum[i - 1] + phi[i];
//  }
//  while (scanf("%d", &n) == 1 && n) {
//    printf("%d\n", 2 * phi_psum[n] + 1);
//  }
//
//  return 0;
//}
