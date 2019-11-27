#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef map<int, int> mi;
typedef pair<int, int> pi;
typedef long long ll;

void solve() {
  int N, M;
  cin >> N >> M;
  if (N > M) {
    cout << 0 << endl;
    return;
  }
  vi X(M, 0);
  vi L(M - 1, 0);
  for (int i = 0; i < M; i++) {
    cin >> X[i];
  }
  sort(all(X));
  for (int i = 0; i < M - 1; i++) {
    L[i] = X[i + 1] - X[i];
  }
  sort(rall(L));
  int ans = X[X.size() - 1] - X[0];
  for (int i = 0; i < N - 1; i++) {
    ans -= L[i];
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}