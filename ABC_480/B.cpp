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
    ll n, m;
    cin>>n>>m;
    vs s(n),t(m);
    map<string,ll>a;
    rep(i,n){
        cin>>s[i];
        a[s[i]]=0;
    }
    rep(i,m){
        cin>>t[i];
    }
    ll tmp;
    ll memo;
    rep(i,m){
        tmp=0;
        rep(j,n){
            if(s[j].size()!=t[i].size()){
                continue;
            }
            if(s[j]==t[i]){
                tmp=1;
                memo=j;
                break;    
            }
            ll count=0;
            rep(k,s[j].size()){
                if(s[j][k]!=t[i][k]){
                    count++;
                }
            }
            if(count==1){
                tmp++;
                memo=j;
            }
        }
        if(tmp==1){
            a[s[memo]]+=1;
        }
    }
    rep(i,n){
        cout<<a[s[i]]<<endl;
    }
    return 0;
}