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
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  sort(all(A));
  int ans_n, ans_r;
  ans_n = A.back();
  vector<pair<int, int>> diff(n);
  for (int i = 0; i < n; i++) {
    diff[i].first = abs(A[i] - (ans_n / 2));
    if (n % 2 == 1) diff[i].first += abs(A[i] - ((ans_n + 1) / 2));
    diff[i].second = A[i];
  }
  sort(all(diff));
  ans_r = diff.front().second;
  cout << ans_n << ' ' << ans_r << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
