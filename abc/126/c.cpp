#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int N, K;
  cin >> N >> K;
  double ans = 0;
  for (int i = 1; i < N + 1; i++) {
    int cur = i;
    double p = 1. / N;
    while (cur < K) {
      cur *= 2;
      p *= 0.5;
    }
    ans += p;
  }
  printf("%.12f", ans);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
