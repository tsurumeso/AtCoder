#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;

void solve() {
  int N, K;
  cin >> N >> K;
  vi p(N, 0);
  vector<double> E(N, 0);
  vector<double> cumsum(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> p[i];
    E[i] = (1 + p[i]) / 2.0;
    cumsum[i] = i == 0 ? E[0] : cumsum[i - 1] + E[i];
  }
  double ans = cumsum[K - 1];
  for (int i = K; i < N; i++) {
    ans = max(ans, cumsum[i] - cumsum[i - K]);
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(12);

  solve();

  return 0;
}
