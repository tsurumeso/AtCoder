#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int N, cnt = 0;
  cin >> N;
  rep1(i, 0, N) {
    int a;
    cin >> a;
    while (a % 2 == 0) {
      a = a / 2;
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}