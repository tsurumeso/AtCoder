#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int N;
  cin >> N;
  int cur = 1, ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a == cur) {
      cur++;
    } else {
      ans++;
    }
  }
  if (ans < N) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
