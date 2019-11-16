#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N, cnt = 0;
  double ans = 0;
  cin >> N;
  vi X(N, 0), Y(N, 0);
  vi perm(N);
  for (int i = 0; i < N; i++) {
    cin >> X[i] >> Y[i];
    perm[i] = i;
  }
  do {
    for (int i = 0; i < N - 1; i++) {
      int x_diff = X[perm[i]] - X[perm[i + 1]];
      int y_diff = Y[perm[i]] - Y[perm[i + 1]];
      ans += sqrt(x_diff * x_diff + y_diff * y_diff);
    }
    cnt++;
  } while (next_permutation(perm.begin(), perm.end()));
  printf("%.12f", ans / cnt);
  return 0;
}