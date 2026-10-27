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
    ll N,K;
    cin>>N>>K;
    vl A(N),C(N);
    rep(i,N){
        cin>>A[i];
    }
    C=A;
    sort(all(C));
    ll l=-1,r=-1;
    rep(i,N){
        if(A[i]!=C[i]){
            if(l==-1){
                l=i;
            }
            r=i;
        }
    }
    
    
    if(l==-1||r-l+1<=K){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

	return 0;
}