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
  int N, M;
  cin >> N >> M;
  UnionFind uf(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    uf.unite(--A, --B);
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (uf.par[i] < 0) ans++;
  }
  cout << ans - 1 << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
