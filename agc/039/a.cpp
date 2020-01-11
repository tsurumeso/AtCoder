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
  ll K;
  cin >> S >> K;
  ll N = S.size();
  if (S.find_first_not_of(S[0]) == string::npos) {
    cout << (N * K) / 2 << endl;
  } else {
    ll cnt = 1, a = 0, d = 0;
    for (int i = 0; i < N - 1; i++) {
      if (S[i] == S[i + 1]) {
        cnt++;
      } else {
        a += cnt / 2;
        cnt = 1;
      }
    }
    a += cnt / 2;
    cnt = 1;
    S = S + S;
    for (int i = 0; i < N * 2 - 1; i++) {
      if (S[i] == S[i + 1]) {
        cnt++;
      } else {
        d += cnt / 2;
        cnt = 1;
      }
    }
    d += cnt / 2;
    cout << a + (K - 1) * (d - a) << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
