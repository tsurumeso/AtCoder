#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N, ans = 0;
  cin >> N;
  vi H(N, 0), T(N, 0);
  for (int i = 0; i < N; i++) cin >> H[i];
  while (true) {
    int i = 0, j = 0;
    bool flag = true;
    for (i = 0; i < N; i++) {
      flag = flag * (T[i] == H[i]);
    }
    if (flag) break;
    for (i = 0; i < N; i++) {
      if (T[i] != H[i]) break;
    }
    for (j = i; j < N; j++) {
      if (T[j] < H[j])
        T[j]++;
      else
        break;
    }
    ans++;
  }
  cout << ans << endl;
  return 0;
}