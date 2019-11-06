#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int N, K;
  double ans = 0;
  cin >> N >> K;
  rep1(i, 1, N + 1) {
    int cur = i;
    double p = 1.0 / N;
    while (cur < K) {
      cur *= 2;
      p *= 0.5;
    }
    ans += p;
  }
  cout << fixed << setprecision(12) << ans << endl;
  return 0;
}
