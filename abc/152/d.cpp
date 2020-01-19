#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef long long ll;

const int MOD = 1000000007;

void solve() {
  int N;
  cin >> N;
  vector<vi> table(10, vi(10, 0));
  for (int i = 1; i < N + 1; i++) {
    string istr = to_string(i);
    table[int(istr[0] - '0')][int(istr[istr.size() - 1] - '0')]++;
  }
  int ans = 0;
  for (int i = 1; i < N + 1; i++) {
    string istr = to_string(i);
    ans += table[int(istr[istr.size() - 1] - '0')][int(istr[0] - '0')];
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
