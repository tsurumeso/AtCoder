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
  ll N, A, B;
  cin >> N >> A >> B;
  ll d = B - A;
  if (d % 2 == 0) {
    cout << d / 2 << endl;
  } else {
    cout << (B - A + 1) / 2 + min(A - 1, N - B) << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
