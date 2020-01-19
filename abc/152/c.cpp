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
typedef long long ll;

const int MOD = 1000000007;

void solve() {
  int N;
  cin >> N;
  vi P(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }
  int ans = 0;
  int vmin = P[0];
  for (int i = 0; i < N; i++) {
    if (P[i] <= vmin) {
      ans++;
      vmin = P[i];
    }
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
