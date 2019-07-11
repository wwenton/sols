#include <bits/stdc++.h>

#define sz(x) ((int) (x).size())
#define sortc(x) sort((x).begin(), (x).end())
#define forn(i, n) for(int i = 0; i < n; ++i)
#define mp make_pair
#define pb push_back
#define pr push_front

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;



int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int m;
  map<char,deque<int>> l;
  forn (i, n) {
    l[s[i]].pb(i);
  }
  for (cin >> m; m--;) {
    string t;
    cin >> t;
    int ans = 0;
    map<char,int> cnt;
    for (char c : t) {
      cnt[c]++;
    }
    for (auto el : cnt) {
      ans = max(ans, l[el.first][el.second - 1]);
    }
    cout << ans + 1 << endl;
  }
  return 0;
}

