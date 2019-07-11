#include <bits/stdc++.h>

#define sz(x) ((int) (x).size())
#define sortc(x) sort((x).begin(), (x).end())
#define forn(i, n) for(int i = 0; i < n; ++i)

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;



int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin >> n;
  VI p(n);
  forn(i, n) {
    cin >> p[i];
  }
  string s;
  cin >> s;
  LL azyr = 0;
  LL b = 0;
  forn(i, n) {
    if (s[i] == 'B') {
      b += p[i];
    }
  }
  LL joop = b;
  LL b1 = b;
  forn(i, n) {
    if (s[i] == 'A') {
      azyr += p[i];
    } else {
      b -= p[i];
    }
    joop = max(joop, b + azyr);
  }
  azyr = 0;
  forn(i, n) {
    if (s[n - i - 1] == 'A') {
      azyr += p[n - i - 1];
    } else {
      b1 -= p[n - i - 1];
    }
    joop = max(joop, b1 + azyr);
  }
  cout << joop << endl;
  return 0;
}

