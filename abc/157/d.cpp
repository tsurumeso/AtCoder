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

struct UnionFind {
  vector<int> par;
  UnionFind(int N) : par(N, -1) {}
  int root(int x) {
    if (par[x] < 0) return x;
    return par[x] = root(par[x]);
  }
  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry) return;
    par[rx] += par[ry];
    par[ry] = rx;
  }
  bool same(int x, int y) { return root(x) == root(y); }
  int size(int x) { return -par[root(x)]; }
};

void solve() {
  int N, M, K;
  cin >> N >> M >> K;
  UnionFind uf(N);
  vector<int> deg(N, 0);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    deg[a]++;
    deg[b]++;
    uf.unite(a, b);
  }
  vector<vector<int>> block(N);
  for (int i = 0; i < K; i++) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    block[a].push_back(b);
    block[b].push_back(a);
  }
  for (int i = 0; i < N; i++) {
    int ans = uf.size(i) - deg[i] - 1;
    for (int b : block[i]) {
      if (uf.same(i, b)) ans--;
    }
    cout << ans << ' ';
  }
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
