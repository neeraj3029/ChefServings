//author: https://codeforces.com/profile/jineshparakh
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repp(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define endl "\n"
#define deb(x) cerr << #x << "=" << x << endl
#define debb(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl
#define mod ((ll)1e18)
#define N ((ll)2e6+10)
#define pb push_back
#define in insert
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test ll t; cin>>t; while(t--)
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

/*Functions*/
ll gcd(ll a, ll b);
ll exp(ll x, ll y, ll p);
ll exp(ll x, ll y);
void InverseofNumber();
void InverseofFactorial();
ll Binomial(ll n, ll R);


ll factorialNumInverse[N + 1];
ll naturalNumInverse[N + 1];
ll fact[N + 1];

void fileIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll dr[] = { -1, 1, 0, 0};
ll dc[] = {0, 0, 1, -1};
char a[51][51];
ll vis[51][51];
ll n, m;
bool isValid(ll xx, ll yy) {
	if ((xx >= 0 && xx < n && yy >= 0 && yy < m))
		return 1;
	return 0;
}
void stop() {
	rep(i, 0, n) {
		rep(j, 0, m) {
			if (a[i][j] == 'B') {
				rep(k, 0, 4) {
					ll xx, yy;
					xx = i + dr[k];
					yy = j + dc[k];
					if (isValid(xx, yy)) {
						if (a[xx][yy] == '.')
							a[xx][yy] = '#';

					}
				}
			}
		}
	}
}
void dfs(ll x, ll y) {
	if (vis[x][y])
		return;
	if (a[x][y] == '#')
		return;
	vis[x][y] = 1;
	rep(i, 0, 4) {
		ll xx, yy;
		xx = x + dr[i];
		yy = y + dc[i];
		if (isValid(xx, yy)) {
			if (!vis[xx][yy]) {
				dfs(xx, yy);
			}
		}
	}
}
bool check() {
	rep(i, 0, n) {
		rep(j, 0, m) {
			if (a[i][j] == 'G' && vis[i][j] == 0)
				return 0;
			if (a[i][j] == 'B' && vis[i][j] == 1)
				return 0;
		}
	}
	return 1;
}


int main() {
	speed
	// InverseofNumber(),InverseofFactorial(),factorial();
	fileIO();
	test{
		memset(a, 0, sizeof(a));
		memset(vis, 0, sizeof(vis));
		cin >> n >> m;
		rep(i, 0, n) {
			string s; cin >> s;
			rep(j, 0, m) {
				a[i][j] = s[j];
			}
		}
		stop();
		dfs(n - 1, m - 1);
		if (check()) {
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;



	}

	return 0;
}


/*All Functions*/
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ll exp(ll x, ll y, ll p) {
	ll res = 1;
	while (y) {
		if (y % 2)
			res = (res * x % p) % p;
		x = (x * x) % p;
		y /= 2;
	}
	return res;
}
ll exp(ll x, ll y) {
	ll res = 1;
	while (y) {
		if (y % 2)
			res = (res * x ) ;
		x = (x * x) ;
		y /= 2;
	}
	return res;
}
void InverseofNumber() {
	naturalNumInverse[0] = naturalNumInverse[1] = 1;
	for (ll i = 2; i <= N; i++)
		naturalNumInverse[i] = naturalNumInverse[mod % i] * (mod - mod / i) % mod;
}
void InverseofFactorial() {
	factorialNumInverse[0] = factorialNumInverse[1] = 1;
	for (ll i = 2; i <= N; i++)
		factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % mod;
}
void factorial() {
	fact[0] = 1;
	for (ll i = 1; i <= N; i++)
		fact[i] = (fact[i - 1] * i) % mod;
}
ll Binomial(ll n, ll R) {
	ll ans = ((fact[n] * factorialNumInverse[R]) % mod * (factorialNumInverse[n - R]) % mod) % mod;
	return ans;
}
