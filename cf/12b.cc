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
	string n, m;
  cin >> n >> m;
  set<char> x;
  for (char c : n) {
    if (c != '0') 
      x.emplace(c);
  }
  sortc(n);
  string joop = "";
  bool fl = true;
  if (sz(x)) {
    joop += *x.begin();
    fl = false;
  }
  for (char c : n) {
    if (c == *x.begin() && !fl) {
      fl = true;
      continue;
    }
    joop += c;
  }
  if (joop == m) {
    cout << "OK" << endl;
  } else {
    cout << "WRONG_ANSWER" << endl;
  }
  return 0;
}

