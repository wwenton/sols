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
  VI a(n);
  forn(i, n) {
    cin >> a[i];
  }
  sortc(a);
  deque<int> ans;
  bool fl = false;
  forn(i, n) {
    if (!fl) {
      ans.pb(a[n - i - 1]);
    } else {
      ans.push_front(a[n - i - 1]);
    }
    fl = !fl;
  }
  bool yes = ans[0] < ans[1] + ans[n - 1];
  for (int i = 1; i < n - 1; ++i) {
    yes &= ans[i - 1] + ans[i + 1] > ans[i];
  }
  yes &= ans[n - 2] + ans[0] > ans[n - 1];
  if (yes) {
    cout << "YES" << endl;
    forn(i, n) {
      if (i) {
        cout << ' ';
      }
      cout << ans[i];
    }
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}

