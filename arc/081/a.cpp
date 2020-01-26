#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef long long ll;

const int MOD = 1000000007;

void solve() {
  int N;
  cin >> N;
  map<int, int> A;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
  }
  vector<pii> A_pair(N);
  int ptr = 0;
  for (auto a : A) {
    A_pair[ptr] = make_pair(a.first, a.second);
    ptr++;
  }
  sort(rall(A_pair));
  ll a = 0, b = 0;
  for (int i = 0; i < N; i++) {
    if (a == 0) {
      if (A_pair[i].second > 1) a = A_pair[i].first;
      if (A_pair[i].second > 3) b = A_pair[i].first;
    } else if (A_pair[i].second > 1 && b == 0) {
      b = A_pair[i].first;
    }
  }
  cout << a * b << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
