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
  int A, B;
  cin >> A >> B;
  for (int i = 1; i <= 1000; i++) {
    if (int((double)i * 0.08) == A && int((double)i * 0.1) == B) {
      cout << i << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}