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
  vector<PII> m, f;
  forn(i, n) {
    char c;
    cin >> c;
    if (c == 'M') {
      int a, b;
      cin >> a >> b;
      m.push_back({a, b});
    } else {
      int a, b;
      cin >> a >> b;
      f.push_back({a, b});
    }
  }
  int joop = 0;
  for (int i = 1; i <= 366; ++i) {
    int f_cnt = 0;
    int m_cnt = 0;
    for (PII el : m) {
      if (el.first <= i && el.second >= i) 
        m_cnt++;
    }
    for (PII el : f) {
      if (el.first <= i && el.second >= i) 
        f_cnt++;
    }
    joop = max(joop, min(f_cnt, m_cnt));
  }
  cout << joop + joop << endl;
  return 0;
}

