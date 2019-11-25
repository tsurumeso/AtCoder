#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N, M, max_L = 0, min_R = 1000000;
  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    int L, R;
    cin >> L >> R;
    max_L = max(max_L, L);
    min_R = min(min_R, R);
  }
  cout << max(min_R - max_L + 1, 0) << endl;
  return 0;
}