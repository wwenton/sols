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
  string s;
  cin >> s;
  int one = count(s.begin(), s.end(), '1');
  int zero = count(s.begin(), s.end(), '0');
  if (one != zero) {
    cout << 1 << endl;
    cout << s << endl;
    return 0;
  }
  cout << 2 << endl;
  cout << s[0] << ' ' << s.substr(1) << endl;
  return 0;
}

