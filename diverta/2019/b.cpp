#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int R, G, B, N, ans = 0;
  cin >> R >> G >> B >> N;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      int rmd = N - (R * i + G * j);
      if (rmd >= 0 && rmd % B == 0) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}