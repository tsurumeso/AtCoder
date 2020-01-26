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
typedef map<int, int> mii;
typedef long long ll;

const int MOD = 1000000007;

void solve() {
  int N;
  cin >> N;
  vi A(N + 2, 0);
  for (int i = 1; i < N + 1; i++) {
    cin >> A[i];
  }
  int sum = 0;
  for (int i = 1; i < N + 2; i++) {
    sum += abs(A[i] - A[i - 1]);
  }
  for (int i = 0; i < N; i++) {
    int sub = abs(A[i] - A[i + 1]) + abs(A[i + 1] - A[i + 2]);
    int add = abs(A[i] - A[i + 2]);
    cout << sum - sub + add << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
