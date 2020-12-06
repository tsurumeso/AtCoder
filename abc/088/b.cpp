#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;
const ll INFLL = 1000000000000000007LL;

void solve() {
  int N;
  int A = 0, B = 0;
  cin >> N;
  vector<int> arr(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  sort(rall(arr));
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0)
      A += arr[i];
    else
      B += arr[i];
  }
  cout << A - B << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
