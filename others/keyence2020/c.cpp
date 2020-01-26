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
  int N, K, S;
  cin >> N >> K >> S;
  int dummy = S == 1000000000 ? 1 : S + 1;
  for (int i = 0; i < N; i++) {
    if (i < K) {
      cout << S << ' ';
    } else {
      cout << dummy << ' ';
    }
  }
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
