#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()

typedef vector<int> vi;
typedef map<int, int> mi;
typedef pair<int, int> pi;
typedef long long ll;

int main() {
  int N, M;
  ll ans = 0;
  cin >> N >> M;
  vi A(N, 0);
  vector<pi> pair_BC(M);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(all(A));
  for (int i = 0; i < M; i++) {
    int B, C;
    cin >> B >> C;
    pair_BC[i] = make_pair(C, B);
  }
  sort(all(pair_BC), greater<pi>());
  int i = 0;
  for (auto x : pair_BC) {
    int j = 0;
    while (j < x.second && x.first > A[i]) {
      A[i] = x.first;
      i++;
      j++;
    }
  }
  for (int i = 0; i < N; i++) {
    ans += A[i];
  }
  cout << ans << endl;
  return 0;
}
