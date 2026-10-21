// https://github.com/kasai166/AtCoder_Template
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using vs = vector<string>;
using vvs = vector<vector<string>>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
const int INF = 1e9;
const ll LINF = 4e18;
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rep1(i, n) for (ll i = 1; i < n; i++)

int main(void)
{
    ll N, K, T;
    cin >> N >> K >> T;
    vl a(N);
    rep(i, N)
    {
        cin >> a[i];
    }
    sort(all(a));
    a.erase(lower_bound(all(a), T), a.end());
    a.push_back(T);
    ll ans = 0;
    if (a[0] > 0)
    {
        ans += (a[0] - 1) / K + 1;
    }
    rep1(i, a.size())
    {
        if (a[i] - a[i - 1] > K)
        {
            ans += (a[i] - a[i - 1] - 1) / K;
        }
    }
    cout << ans << endl;

    return 0;
}