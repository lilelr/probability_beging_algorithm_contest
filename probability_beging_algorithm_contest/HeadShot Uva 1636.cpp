//
////条件概率
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
//const int maxn = 1000;
//
//int main() {
//  freopen("", "r", stdin);
//  freopen("", "w", stdout);
//
//  char s[120];
//  while (scanf("%s", s) == 1) {
//    int a = 0, b = 0, n = strlen(s);
//    for (int i = 0; i < n; i++) {
//      if (s[i] == '0') {
//        b++;
//        if (s[(i + 1) % n] == '0') {
//          a++;
//        }
//      }
//    }
//
//    if (a * n == b * b) {
//      printf("EQUAL\n");
//    } else if (a * n > b * b) {
//      printf("SHOOT\n");
//    } else {
//      printf("ROTATE\n");
//    }
//  }
//
//  return 0;
//}
