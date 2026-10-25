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
#define rep1(i,n) for(int i=1;i<(n);i++)
#define repequal(i,n) for(int i=0;i<n;i++)
#define rep1equal(i,n) for(int i=1;i<=n;i++)

int main(void){
	ll n,k;
	cin>>n>>k;
	vl a(n);
	ll cnt=0;
	rep(i,n){
		cin>>a[i];
	}
	if(a[0]==k){
		cnt++;
	}
	rep1(i,n){
		if((a[i]<k&&a[i-1]>k)||(a[i]>k&&a[i-1]<k)||a[i]==k){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}