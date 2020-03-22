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
  vector<pair<int, int>> X(N);
  vector<int> ans(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> X[i].first;
    X[i].second = i;
  }
  sort(all(X));
  for (int i = 0; i < N; i++) {
    if (i < N / 2)
      ans[X[i].second] = X[N / 2].first;
    else
      ans[X[i].second] = X[(N - 1) / 2].first;
  }
  for (int i = 0; i < N; i++) {
    cout << ans[i] << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
