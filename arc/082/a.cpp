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
  int N;
  cin >> N;
  vector<int> cnt(100009, 0);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  int ans = 0;
  for (int i = 0; i < 100000; i++) {
    ans = max(ans, cnt[i] + cnt[i + 1] + cnt[i + 2]);
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
