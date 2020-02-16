#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;

void solve() {
  int N;
  cin >> N;
  bool flag = true;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      if (a % 3 != 0 && a % 5 != 0) {
        flag = false;
      }
    }
  }
  if (flag) {
    cout << "APPROVED" << endl;
  } else {
    cout << "DENIED" << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
