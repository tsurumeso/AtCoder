#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N, M;
  cin >> N;
  map<int, int> D_cnt, T_cnt;
  for (int i = 0; i < N; i++) {
    int d;
    cin >> d;
    D_cnt[d] = D_cnt[d] + 1;
  }
  cin >> M;
  for (int i = 0; i < M; i++) {
    int t;
    cin >> t;
    T_cnt[t] = T_cnt[t] + 1;
  }

  string ans = "YES";
  for (auto x : T_cnt) {
    if (D_cnt[x.first] < x.second) ans = "NO";
  }
  cout << ans << endl;

  return 0;
}