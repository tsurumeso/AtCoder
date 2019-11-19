#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N;
  cin >> N;
  if (N % 2 == 0)
    cout << N / 2 - 1 << endl;
  else {
    cout << N / 2 << endl;
  }
  return 0;
}