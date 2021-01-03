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
  int N, Q;
  ll ans = 0;
  vector<int> cnt(100001, 0);
  cin >> N;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    cnt[a]++;
    ans += a;
  }
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int b, c;
    cin >> b >> c;
    ans += (c - b) * cnt[b];
    cnt[c] += cnt[b];
    cnt[b] = 0;
    cout << ans << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
