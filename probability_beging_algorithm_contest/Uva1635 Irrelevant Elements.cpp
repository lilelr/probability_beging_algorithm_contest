// LA3221/UVa1635 Irrelevant Elements
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=850&problem=4510&mosmsg=Submission+received+with+ID+18181780
// 杨辉三角 （组合数递推公式）+ 素数分解
// Rujia Liu
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

const int maxn = 100000 + 5;
int bad[maxn];

void prime_factors(int n, vector<int> &primes) {
  int m = floor(sqrt(n) + 0.5);
  for (int i = 2; i <= m; i++) {
    if (n % i == 0) { // 新的素因子
      primes.push_back(i);
      while (n % i == 0)
        n /= i;
    }
  }
  if (n > 1)
    primes.push_back(n);
}
int main() {
  int n, m, kase = 0;
  while (cin >> n >> m) {
    vector<int> primes;
    prime_factors(m, primes); // 对m进行素数分解，质因子存储在primes vector中
    memset(bad, 0, sizeof(bad));
    n--;
    // 求c(n,0)~c(n,n)有哪些数是m的倍数
    for (int i = 0; i < primes.size(); i++) {
      int p = primes[i], e = 0; // C(n,0) = p^e
      int min_e = 0, x = m;
      while (x % p == 0) {
        x /= p;
        min_e++;
      }
      // c(n,k)=c(n,k-1)*(n-k+1)/k
      for (int k = 1; k < n; k++) {
        x = n - k + 1;
        while (x % p == 0) {
          x /= p;
          e++;
        }
        x = k;
        while (x % p == 0) {
          x /= p;
          e--;
        }
        if (e < min_e)
          bad[k] = 1; // 如果e>= min_e ,则说明x包含约数 p^(min_e)
      }
    }
    vector<int> ans;
    for (int k = 1; k < n; k++)
      if (!bad[k])
        ans.push_back(k + 1); // 编号从1开始,bad[k]==0 ，说明该下标的数与m不相关
    cout << ans.size() << "\n";
    if (!ans.empty()) {
      cout << ans[0];
      for (int i = 1; i < ans.size(); i++)
        cout << " " << ans[i];
    }
    cout << "\n";
  }
  return 0;
}
