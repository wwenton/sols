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
  int n, x;
  cin >> n >> x;
  vector<PII> p(n);
  forn(i, n) {
    cin >> p[i].first >> p[i].second;
    if (p[i].first >= p[i].second)
      swap(p[i].first, p[i].second);
  }
  int ans = 1111;
  for (int i = 0; i <= 1000; ++i) {
    int cnt = 0;
    for (int j = 0; j < n; ++j) {
      if (p[j].first <= i && p[j].second >= i) {
        cnt++;
      }
    }
    if (cnt == n) {
      ans = min(ans, abs(x - i));
    }
  }
  if (ans == 1111)
    ans = -1;
  cout << ans << endl;
  return 0;
}

