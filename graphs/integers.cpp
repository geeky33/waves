#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<ll>;
using vll = vector<vector<ll>>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define vecinp(v, n) for (ll i = 0; i < n; i++){cin>>v[i];}
#define vecout(v) for (int i = 0; i < v.size(); i++){cout << v[i] << endl;}
#define fr(i, n) for (int i = 0; i < n; i++)
#define px(x) cout << x << endl;
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define endl '\n'
#define M 1000000007
#define precision(x, p) std::cout << std::fixed << std::setprecision(p) << x << std::endl;
#define pb push_back
#define get_bit(x, r) (x & (1 << r))
#define all(v) v.begin(), v.end()
#define sz(x) (int)x.size()
#define len(x) (int)x.length()
#define srt(v) sort(all(v))
#define rt return
#define T true
#define F false
#define in cin >> 
#define out cout << 
void solve() {
  int n;
  cin >> n;
  if (n%3==0){
    out "Second"<<endl;
    }
    else if ((n-1)%3==1){
        out "First"<<endl;
        }
        else if ((n+1)%3==2){
            out "First"<<endl;
            }

  }


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  rt 0;
}