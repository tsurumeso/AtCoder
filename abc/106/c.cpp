#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  string S;
  ll K;
  char ans, cnt = 0;
  cin >> S >> K;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] != '1') {
      ans = S[i];
      break;
    }
    cnt++;
  }
  if (cnt >= K) {
    ans = '1';
  }
  cout << ans << endl;
  return 0;
}