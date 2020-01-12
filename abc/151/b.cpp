#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

void solve() {
  int N, K, M;
  cin >> N >> K >> M;
  int sum = 0;
  for (int i = 0; i < N - 1; i++) {
    int a;
    cin >> a;
    sum += a;
  }
  int ans = max(0, N * M - sum);
  if (ans > K)
    cout << -1 << endl;
  else
    cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
