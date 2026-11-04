//https://github.com/kasai166/AtCoder_Template
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
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rep1(i,n) for(int i=1;i<=(n);i++)

int main(void){
    vs s(5);
    rep(i,5){
        cin>>s[i];
    }
    ll ans=INF;
    rep(i,5){
        ll tmp=0;
        rep(j,5){
            if(s[i][j]=='.'){
                tmp++;
            }
        }
        chmin(ans,tmp);
    }
    rep(i,5){
        ll tmp=0;
        rep(j,5){
            if(s[j][i]=='.'){
                tmp++;
            }
        }
        chmin(ans,tmp);
    }
    ll tmp=0;
    rep(i,5){
        if(s[i][i]=='.'){
            tmp++;
        }
    }
    chmin(ans,tmp);
    rep(i,5){
        if(s[i][4-i]=='.'){
            tmp++;
        }
    }
	chmin(ans,tmp);
    cout<<ans<<endl;
    return 0;
}