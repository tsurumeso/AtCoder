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
  int N;
  cin >> N;
  vi A(N);
  deque<int> ans;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    if (N % 2 == 0) {
      if (i % 2 == 0) {
        ans.push_back(A[i]);
      } else {
        ans.push_front(A[i]);
      }
    } else {
      if (i % 2 == 0) {
        ans.push_front(A[i]);
      } else {
        ans.push_back(A[i]);
      }
    }
  }
  for (int i = 0; i < N; i++) {
    cout << ans[i] << ' ';
  }
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
