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

void solve() {
  int W, H, x, y;
  cin >> W >> H >> x >> y;
  vi S(4, 0);
  double ans = (double)W * (double)H / 2;
  printf("%f %d", ans, W == x * 2 && H == y * 2);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
