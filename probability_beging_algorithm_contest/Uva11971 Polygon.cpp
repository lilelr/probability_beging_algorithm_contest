// 求概率 直线的问题转为圆的问题
#include <iostream>
using namespace std;

typedef long long LL;

LL gcd(LL a, LL b) { return b == 0 ? a : gcd(b, a % b); }

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
    cout << "Case #" << kcase << ":" << a << "/" << b << endl;
  }
  return 0;
}