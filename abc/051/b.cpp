#include <bits/stdc++.h>
#include <algorithm>

#define rep(i, a, n) for (int i = a; i < n; i++)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int K, S, ans = 0;
  cin >> K >> S;
  rep(i, 0, K + 1) {
    rep(j, 0, K + 1) {
      int tmp = S - (i + j);
      if (tmp >= 0 && tmp <= K) ans += 1;
    }
  }
  cout << ans << endl;
  return 0;
}