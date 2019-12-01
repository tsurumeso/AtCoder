#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int N, ans = 0;
  string S;
  cin >> N >> S;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 10; k++) {
        bool flag_i = false;
        bool flag_j = false;
        for (int l = 0; l < N; l++) {
          int c = (int)(S[l] - '0');
          if (!flag_i && c == i) {
            flag_i = true;
          } else if (!flag_j && flag_i && c == j) {
            flag_j = true;
          } else if (flag_j && c == k) {
            ans++;
            break;
          }
        }
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
