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

int cN, cW, cS, cE;

void solve() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'N') {
      cN++;
    } else if (S[i] == 'W') {
      cW++;
    } else if (S[i] == 'S') {
      cS++;
    } else if (S[i] == 'E') {
      cE++;
    }
  }
  string ans = "Yes";
  if (cN > 0 && cS == 0)
    ans = "No";
  else if (cS > 0 && cN == 0)
    ans = "No";
  if (cW > 0 && cE == 0)
    ans = "No";
  else if (cE > 0 && cW == 0)
    ans = "No";
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
