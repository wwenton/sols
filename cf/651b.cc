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
  vector<bool> used(n);
  int joop = 0;
  forn(i, n) {
    int ind = -1;
    for (int j = i + 1; j < n; ++j) {
      if (used[j]) {
        continue;
      }
      if (a[j] > a[i]) {
        ind = j;
        break;
      }
    }
    if (ind != -1) {
      used[ind] = true;
      ++joop;
    }
  }
  cout << joop << endl;
  return 0;
}

