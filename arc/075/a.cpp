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
  int sum = 0;
  vector<int> S(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    sum += S[i];
  }
  int ans = 0;
  sort(all(S));
  for (int i = 0; i < N; i++) {
    if (sum % 10 != 0) {
      ans = sum;
      break;
    }
    if (S[i] % 10 != 0) sum -= S[i];
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
