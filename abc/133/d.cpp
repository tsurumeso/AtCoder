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
  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int m = 0;
  for (int j = 0; j < N; j++) {
    int k = j % N;
    if (j % 2 == 0) {
      m += A[k];
    } else {
      m -= A[k];
    }
  }
  cout << m << ' ';
  for (int i = 1; i < N; i++) {
    m = 2 * A[i - 1] - m;
    cout << m << ' ';
  }
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
