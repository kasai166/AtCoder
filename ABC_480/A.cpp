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
	string s1,s2;
	cin >> s1 >> s2;
	if(s1=="AD"||s2=="AD"||(s1[0]=='A'&&s2[0]=='D')||(s1[0]=='D'&&s2[0]=='A')||(s1[1]=='A'&&s2[1]=='D')||(s1[1]=='D'&&s2[1]=='A')){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}