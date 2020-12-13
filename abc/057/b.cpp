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
  vector<int> A(N), B(N);
  vector<int> C(N), D(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }
  for (int i = 0; i < M; i++) {
    cin >> C[i] >> D[i];
  }
  for (int i = 0; i < N; i++) {
    int m = INF;
    int ans = 0;
    for (int j = 0; j < M; j++) {
      int d = abs(A[i] - C[j]) + abs(B[i] - D[j]);
      if (d < m) {
        ans = j;
        m = d;
      }
    }
    cout << ans + 1 << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
