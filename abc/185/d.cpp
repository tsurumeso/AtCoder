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

int ceil(int a, int b) { return (a + (b - 1)) / b; }

void solve() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M + 1, 0);
  for (int i = 1; i <= M; i++) {
    cin >> A[i];
  }
  A.push_back(N + 1);
  sort(all(A));
  int d = A[0];
  vector<int> D;
  for (int i = 1; i <= M + 1; i++) {
    d = A[i] - A[i - 1] - 1;
    if (d != 0) D.push_back(d);
  }
  if (D.size() == 0) {
    cout << 0 << endl;
    return;
  }
  sort(all(D));
  int m = D[0];
  int ans = 0;
  for (int i = 0; i < D.size(); i++) {
    ans += ceil(D[i], m);
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
