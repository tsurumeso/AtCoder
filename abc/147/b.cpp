#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  string S;
  cin >> S;
  string rev = S;
  int N = S.size(), ans = 0;
  for (int i = 0; i < N / 2; i++) {
    if (S[i] != rev[N - i - 1]) ans++;
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
