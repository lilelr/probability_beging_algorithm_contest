// 求概率 直线的问题转为圆的问题 除以最大公约数的形式实现分数约简
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=850&problem=2321&mosmsg=Submission+received+with+ID+18188360
#include <iostream>
using namespace std;

typedef long long LL;

// 求最大公约数
LL gcd(LL a, LL b) { return b == 0 ? a : gcd(b, a % b); }

// 以分数形式表示结果 fraction in form of N/D
void reduce(LL &a, LL &b) {
  LL g = gcd(a, b);
  a /= g;
  b /= g;
}

int main() {
  int T, n, k;
  cin >> T;
  for (int kcase = 1; kcase <= T; kcase++) {
    cin >> n >> k;
    // 组不成的概率为（k+1）/2^k
    LL b = 1LL << k;
    // 能组成的概率为a/b
    LL a = b - k - 1;
    reduce(a, b);
    cout << "Case #" << kcase << ": " << a << "/" << b << endl;
  }
  return 0;
}