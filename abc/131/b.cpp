#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int N, L, eat = 0;
  cin >> N >> L;
  int R = L + N - 1;
  if (R < 0)
    eat = R;
  else if (L > 0)
    eat = L;
  else
    eat = 0;
  cout << (N * (L + R) / 2) - eat << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
