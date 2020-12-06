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
  int N, ans = 0;
  cin >> N;
  vector<int> D(100, 0);
  for (int i = 0; i < N; i++) {
    int d;
    cin >> d;
    D[d - 1] = 1;
  }
  for (int i = 0; i < 100; i++) {
    ans += D[i];
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
