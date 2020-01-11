#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

char choice(char x) {
  if (x == 'r') return 'p';
  if (x == 's') return 'r';
  if (x == 'p') return 's';
}

void solve() {
  int N, K, R, S, P;
  string T;
  cin >> N >> K >> R >> S >> P >> T;
  vector<int> mr(N, 0), ms(N, 0), mp(N, 0);
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (T[i] == 'r') {
      if (i < K || mp[i - K] == 0) {
        ans += P;
        mp[i] = 1;
      }
    } else if (T[i] == 's') {
      if (i < K || mr[i - K] == 0) {
        ans += R;
        mr[i] = 1;
      }
    } else if (T[i] == 'p') {
      if (i < K || ms[i - K] == 0) {
        ans += S;
        ms[i] = 1;
      }
    }
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
