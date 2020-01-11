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
  for (int i = 1; i < S.size(); i++) {
    string tmp = S.substr(0, S.size() - i);
    int n = tmp.size();
    if (n % 2 == 0) {
      if (tmp.substr(0, n / 2) == tmp.substr((n / 2), n / 2)) {
        cout << n << endl;
        return;
      }
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
