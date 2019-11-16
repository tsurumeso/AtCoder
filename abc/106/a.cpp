#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int A, B;
  cin >> A >> B;
  cout << A * B - (A + B - 1) << endl;
  return 0;
}