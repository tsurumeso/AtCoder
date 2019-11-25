#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()

typedef vector<int> vi;
typedef map<int, int> mi;
typedef pair<int, int> pi;
typedef long long ll;

int main() {
  string S;
  cin >> S;
  if (S == "MON") {
    cout << 6 << endl;
  } else if (S == "TUE") {
    cout << 5 << endl;
  } else if (S == "WED") {
    cout << 4 << endl;
  } else if (S == "THU") {
    cout << 3 << endl;
  } else if (S == "FRI") {
    cout << 2 << endl;
  } else if (S == "SAT") {
    cout << 1 << endl;
  } else {
    cout << 7 << endl;
  }
  return 0;
}