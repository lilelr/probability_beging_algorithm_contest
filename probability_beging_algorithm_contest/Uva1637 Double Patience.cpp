// UVa1637 Double Patience 全概率+动态规划
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=850&problem=4512&mosmsg=Submission+received+with+ID+18188089
// Rujia Liu
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

map<vector<int>, double> d; // 记录每个状态的取胜概率。 key
// 为当前状态下，每个牌堆的牌数，value
// 即为当前牌组的取胜概率
char card[9][4][3]; // 记录输入牌组

// cnt is a vector of length 9, cnt[i] is the number of remaining cards in pile
// i.
// c is the sum of cnt. It is here to save time and code length :)
double dp(vector<int> &cnt, int c) {
  if (c == 0) {
    return 1; // 没有牌了，取胜概率为1
  }
  // vector<int>& cnt
  if (d.count(cnt) != 0) { //已经统计过当前牌组的概率，直接返回
    return d[cnt];
  }
  double sum = 0;
  int tot = 0;
  for (int i = 0; i < 9; i++) {
    if (cnt[i] > 0) {
      for (int j = i + 1; j < 9; j++) {
        if (cnt[j] > 0)
          //  第i个堆的堆顶元素与第j个堆的堆顶元素相同，可以拿掉
          if (card[i][cnt[i] - 1][0] == card[j][cnt[j] - 1][0]) {
            tot++;
            cnt[i]--;
            cnt[j]--;
            sum += dp(cnt, c - 2); // 动态规划，每次减去两个相同的顶堆牌。sum
            // 加上剩余牌的取胜概率  全概率+动态规划
            cnt[i]++;
            cnt[j]++;
          }
      }
    }
  }
  if (tot == 0) { // 没有两个顶堆top有相同的牌,取胜概率为0
    return d[cnt] = 0;

  } else {
    //
    return d[cnt] = sum / tot;
  }
}

bool read_input() {
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 4; j++)
      if (scanf("%s", card[i][j]) != 1)
        return false;
  return true;
}

int main() {
  while (read_input()) {
    vector<int> cnt(9, 4); // 9个元素的数组，初始化为4
    d.clear();
    printf("%.6lf\n", dp(cnt, 36));
  }
  return 0;
}
