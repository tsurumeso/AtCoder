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
  map<int, int> A;
  vi A_cand;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
    if (A[a] == 2) {
      A_cand.push_back(a);
      A[a] = 0;
    }
  }
  if (A_cand.size() > 1) {
    sort(rall(A_cand));
    cout << (ll)A_cand[0] * A_cand[1] << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
