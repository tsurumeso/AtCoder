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
  vector<vector<int>> G(N);
  vector<pair<int, int>> vp;
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].emplace_back(b);
    G[b].emplace_back(a);
    vp.emplace_back(a, b);
  }
  int ans = 0;
  queue<int> que;
  vector<int> visited(N, 0);
  vector<int> cs(N, 0);
  map<pair<int, int>, int> mp;
  visited[0] = 1;
  que.emplace(0);
  while (!que.empty()) {
    int u = que.front();
    que.pop();
    int c = 1;
    ans = max(ans, (int)G[u].size());
    for (int v : G[u]) {
      if (visited[v]) continue;
      if (c == cs[u]) c++;
      cs[v] = mp[make_pair(u, v)] = mp[make_pair(v, u)] = c++;
      visited[v] = 1;
      que.emplace(v);
    }
  }
  cout << ans << endl;
  for (auto p : vp) cout << mp[p] << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
