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
  ll A, B, X;
  cin >> A >> B >> X;
  ll lb = 0, ub = 1000000001;
  while (ub - lb > 1) {
    ll mid = (lb + ub) / 2;
    ll key = A * mid + B * to_string(mid).size();
    if (key <= X) {
      lb = mid;
    } else {
      ub = mid;
    }
  }
  cout << lb << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}