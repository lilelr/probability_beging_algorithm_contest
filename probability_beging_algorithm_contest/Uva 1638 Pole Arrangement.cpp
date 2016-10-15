//// // UVa1638/LA6117 Pole Arrangement 杆子的插放 经典的模拟 + 递推法
//// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=850&page=show_problem&problem=4513
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
//const int maxn = 20;
//
//long long d[maxn + 1][maxn + 1][maxn + 1];
//
//int main() {
//  //  freopen("", "r", stdin);
//  //  freopen("", "w", stdout);
//
//  d[1][1][1] = 1;
//
//  for (int i = 2; i <= maxn; i++) {
//    for (int j = 1; j <= i; j++) {
//      for (int k = 1; k <= i; k++) {
//        d[i][j][k] = d[i - 1][j][k] * (i - 2);
//        if (j > 1) {
//          d[i][j][k] +=
//              d[i - 1][j - 1][k]; // i-1 状态 左边能看到j-1根，右边能看到k根
//        }
//        if (k > 1) {
//          d[i][j][k] += d[i - 1][j][k - 1];
//        }
//      }
//    }
//  }
//  int T, n, L, R;
//  cin >> T;
//  while (T--) {
//    cin >> n >> L >> R;
//    cout << d[n][L][R] << "\n";
//  }
//  return 0;
//}
