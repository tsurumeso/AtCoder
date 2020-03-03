#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;
const ll INFLL = 1000000000000000007LL;

void solve() {
  int N, M;
  cin >> N >> M;
  string ans = "";
  vector<bool> mask(N, false);
  for (int i = 0; i < N; i++) {
    ans += 'x';
  }
  for (int i = 0; i < M; i++) {
    int s, c;
    cin >> s >> c;
    if (ans[s - 1] == 'x' || ans[s - 1] == c + '0') {
      ans[s - 1] = c + '0';
      mask[s - 1] = true;
    } else {
      cout << -1 << endl;
      return;
    }
  }
  for (int i = 0; i < N; i++) {
    if (ans[i] == 'x') {
      ans[i] = '0';
    }
  }
  if (ans[0] == '0' && ans.size() > 1) {
    if (!mask[0]) {
      ans[0] = '1';
    } else {
      cout << -1 << endl;
      return;
    }
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
