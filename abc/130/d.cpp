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
typedef map<int, int> mii;
typedef long long ll;

const int MOD = 1000000007;

// two pointers
void solve() {
  ll N, K;
  cin >> N >> K;
  vi A(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int r = 0;
  ll ans = 0, sum = 0;
  for (int l = 0; l < N; l++) {
    while (r < N && sum < K) {
      sum += A[r];
      r++;
    }
    if (sum < K) break;
    ans += N - r + 1;
    sum -= A[l];
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
