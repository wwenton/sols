#include <bits/stdc++.h>

#define sz(x) ((int) (x).size())
#define sortc(x) sort((x).begin(), (x).end())
#define forn(i, n) for(int i = 0; i < n; ++i)

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;

constexpr int mxn = 300100;
char s[mxn];
int n;
LL dp[mxn];

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  cin >> s;
  n = strlen(s);
  if ((s[0] - '0') % 4 == 0)
    dp[0] = 1;
  for (int i = 1; i < n; ++i) {
    dp[i] = dp[i - 1];
    if ((s[i] - '0') % 4 == 0) {
      ++dp[i];
    }
    int x = s[i] - '0' + (s[i - 1] - '0') * 10;
    if (x % 4 == 0) 
      dp[i] += i;
  } 
  cout << dp[n - 1] << endl;
  return 0;
}

