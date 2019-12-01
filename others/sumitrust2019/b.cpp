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
  for (int i = 0; i < 50001; i++) {
    if ((int)(i * 1.08) == N) {
      cout << i << endl;
      return;
    }
  }
  cout << ":(" << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
