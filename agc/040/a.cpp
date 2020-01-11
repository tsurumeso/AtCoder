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
  string S;
  cin >> S;
  int N = S.size();
  vi A(N + 1, 0), B(N + 1, 0);
  for (int i = 0; i < N; i++) {
    if (S[i] == '<') {
      A[i + 1] = A[i] + 1;
    }
  }
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == '>') {
      B[i] = B[i + 1] + 1;
    }
  }
  ll ans = 0;
  for (int i = 0; i < N + 1; i++) {
    ans += max(A[i], B[i]);
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
