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

int main() {
  int N;
  string S;
  string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cin >> N >> S;
  for (int i = 0; i < S.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (S[i] == arr[j]) {
        cout << arr[(j + N) % arr.size()];
        break;
      }
    }
  }
  cout << endl;
  return 0;
}