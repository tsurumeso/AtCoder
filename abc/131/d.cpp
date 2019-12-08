#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int N;
  cin >> N;
  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    p[i] = make_pair(b, a);
  }
  ll sum = 0;
  sort(all(p));
  for (auto x : p) {
    sum += x.second;
    if (sum > x.first) {
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
