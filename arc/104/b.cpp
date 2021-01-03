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
  string S;
  cin >> N >> S;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int nat = 0;
    int ngc = 0;
    for (int j = i; j < N; j++) {
      if (S[j] == 'A') {
        nat++;
      } else if (S[j] == 'T') {
        nat--;
      } else if (S[j] == 'G') {
        ngc++;
      } else if (S[j] == 'C') {
        ngc--;
      }
      if (nat == 0 && ngc == 0) {
        ans++;
      }
    }
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
