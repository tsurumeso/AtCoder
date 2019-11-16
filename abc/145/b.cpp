#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N;
  string S;
  cin >> N >> S;
  if (N % 2 == 1) {
    cout << "No" << endl;
  } else {
    if (S.substr(0, N / 2) == S.substr((N / 2), N)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}