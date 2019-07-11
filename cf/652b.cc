#include <bits/stdc++.h>

#define sz(x) ((int) (x).size())
#define sortc(x) sort((x).begin(), (x).end())
#define forn(i, n) for(int i = 0; i < n; ++i)
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;



int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin >> n;
  VI b(n);
  forn(i, n) {
    cin >> b[i];
  }
  sortc(b);
  int ind = 0;
  VI ans(n);
  for (int i = 0; i < n; i += 2) {
    ans[i] = b[ind++];
  }
  for (int i = 1; i < n; i += 2) {
    ans[i] = b[ind++];
  }
  bool imp = true;
  forn(i, n) {
    if (i && i % 2 == 0) {
      imp &= ans[i] <= ans[i - 1];
    } else if (i) {
      imp &= ans[i] >= ans[i - 1];
    }
  }
  if (imp) {
    forn(i, n) {
      if (i) {
        cout << ' ';
      }
      cout << ans[i];
    }
    cout << endl;
  } else {
    cout << "Impossible" << endl;
  }
  return 0;
}

