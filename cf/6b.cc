#include <bits/stdc++.h>

#define sz(x) ((int) (x).size())
#define sortc(x) sort((x).begin(), (x).end())
#define forn(i, n) for(int i = 0; i < n; ++i)

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;

template <class c> auto try_out(c x) -> decltype(cerr << x, 0);
char try_out(...);
template <class c> struct range { c b, e; };
template <class c> range<c> mrange(c i, c j) { return range<c>{i, j}; }

struct err {

  template <class c, class d> err& operator << (pair<c,d> x) {
    return *this << "(" << x.first << ", " << x.second << ")";
  }

  template <class c> typename enable_if<sizeof(try_out(declval<c>())) != 1, err&>::type operator << (c x) {
    cerr << boolalpha << x;
    return *this;
  }

  template <class c> typename enable_if<sizeof(try_out(declval<c>())) == 1, err&>::type operator << (c x) {
    return *this << mrange(begin(x), end(x));
  }

  template <class c> err& operator << (range<c> x) {
    *this << "{";
    for (auto it = x.b; it != x.e; it++)
      *this << ", " + 2 * (it == x.b) << *it;
    return *this << "}";
  }

};

#define aty(...) "[ " << #__VA_ARGS__ << " : " << __VA_ARGS__ << " ]"

#ifdef MENIN_COMPUM
  #define debug(x) err() << aty(x) << "\n"
#else
  #define debug(x) 42
#endif


constexpr int mxn = 111;
int n, m;
char c;
char s[mxn][mxn];

int dx[] = {-1, 0, 0, +1};
int dy[] = {0, -1, +1, 0};

set<char> ls;

bool jakshy(int i, int j) {
  return i >= 0 && i < n && j >= 0 && j < m && ls.count(s[i][j]) == 0;
}


int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  cin >> n >> m >> c;
  forn(i, n) {
    cin >> s[i];
  }
  ls.insert(c);
  ls.insert('.');
  forn(i, n) {
    forn(j, m) {
      if (s[i][j] == c) {
        forn(k, 4) {
          if (jakshy(dx[k] + i, dy[k] + j)) {
            ls.emplace(s[dx[k] + i][dy[k] + j]);
          }
        }
      }
    }
  }
  debug(ls);
  cout << sz(ls) - 2 << endl;
  return 0;
}

