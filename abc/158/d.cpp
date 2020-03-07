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
  string S;
  int Q;
  cin >> S >> Q;
  deque<char> ans;
  for (int i = 0; i < S.size(); i++) {
    ans.push_back(S[i]);
  }
  bool flag = false;
  for (int i = 0; i < Q; i++) {
    int T;
    cin >> T;
    if (T == 1) {
      flag = !flag;
    } else {
      int F;
      char C;
      cin >> F >> C;
      if (F == 1) {
        if (flag)
          ans.push_back(C);
        else
          ans.push_front(C);
      } else {
        if (flag)
          ans.push_front(C);
        else
          ans.push_back(C);
      }
    }
  }

  if (flag) reverse(all(ans));
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
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