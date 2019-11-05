#include <bits/stdc++.h>
#include <algorithm>

#define rep(i, a, n) for (int i = a; i < n; i++)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int N, M, ans = 0;
  cin >> N;
  vector<int> T(N, 0);
  rep(i, 0, N) {
    cin >> T[i];
    ans += T[i];
  }
  cin >> M;
  rep(i, 0, M) {
    int p, x;
    cin >> p >> x;
    cout << ans - (T[p - 1] - x) << endl;
  }
  return 0;
}
