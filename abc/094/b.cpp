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
  int N, M, X;
  cin >> N >> M >> X;
  map<int, int> A;
  for (int i = 0; i < M; i++) {
    int a;
    cin >> a;
    A[a] = 1;
  }
  int ans_l = 0;
  for (int i = X; i >= 0; i--) {
    ans_l += A[i];
  }
  int ans_r = 0;
  for (int i = X; i <= N; i++) {
    ans_r += A[i];
  }
  cout << min(ans_l, ans_r) << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
