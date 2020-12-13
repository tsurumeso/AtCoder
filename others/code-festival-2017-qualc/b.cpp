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
  int N, all = 1, odd = 1;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    all *= 3;
    if (A % 2 == 0) {
      odd *= 2;
    }
  }
  cout << all - odd << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
