////杨辉三角求解,O(n) 结合二项式定理
//
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
//const int maxn = 100;
//int c[maxn];
//int n;
//
//int main() {
//  freopen("/Users/yuxiao/XcodeProject/probability_beging_algorithm_contest/"
//          "probability_beging_algorithm_contest/in",
//          "r", stdin);
//  freopen("/Users/yuxiao/XcodeProject/probability_beging_algorithm_contest/"
//          "probability_beging_algorithm_contest/out",
//          "w", stdout);
//
//  int T, t;
//  cin >> T;
//  t = 1;
//  while (T--) {
//    cin >> n;
//    c[0] = 1;
//    cout << c[0];
//    for (int i = 1; i <= n; i++) {
//      c[i] = c[i - 1] * (n - i + 1) / i;
//      cout << " " << c[i];
//    }
//    cout << endl;
//  }
//  return 0;
//}
