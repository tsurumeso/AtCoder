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
  vi perm(N);
  vi P(N), Q(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
    perm[i] = i + 1;
  }
  for (int i = 0; i < N; i++) {
    cin >> Q[i];
  }
  int a, b, cnt = 0;
  do {
    if (perm == P) a = cnt;
    if (perm == Q) b = cnt;
    cnt++;
  } while (next_permutation(all(perm)));
  cout << abs(a - b) << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
