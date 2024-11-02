#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

// Typedefs
#define nl cout << '\n';
typedef vector<int> vi;
typedef long long LL;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

#define ALL(v) (v).begin(), (v).end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define TC(t) while (t--)

// Fast I/O
auto initialize = []() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  return 0;
}();

// Function to convert boolean to char
inline char booltoChar(int i) {
  return i ? '1' : '0';
}

// Result processing function
void result() {
  int occurrences = 0;
  string s;
  cin >> s;

  vector<bool> start(s.length() - 3, false);

  for (int i = 0; i < s.length() - 3; ++i) {
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
      start[i] = true;
      occurrences += 1;
    }
  }

  int ops;
  cin >> ops;

  while (ops--) {
    int a, b;
    cin >> a >> b;
    s[a-1] = booltoChar(b);

    for (int i = max(0, a - 3); i <= min((int)s.length() - 4, a); ++i) {
      bool match = (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0');
      if (match && !start[i]) {
        start[i] = true;
        occurrences++;
      } else if (!match && start[i]) {
        start[i] = false;
        occurrences--;
      }
    }

    if (occurrences > 0) {yes;}
    else no;
  }
}

int main() {
  int tc;
  cin >> tc;
  TC(tc) {
    result();
  }
  return 0;
}
