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
  char a, b;
  cin >> a >> b;
  if (a == 'H') {
    if (b == 'H') {
      cout << 'H' << endl;
    } else {
      cout << 'D' << endl;
    }
  } else {
    if (b == 'H') {
      cout << 'D' << endl;
    } else {
      cout << 'H' << endl;
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
