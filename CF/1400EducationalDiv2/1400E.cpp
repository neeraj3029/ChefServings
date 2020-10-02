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
#define mod ((ll)1e9+7)
#define N ((ll)3e5+20)
#define pb push_back
#define in insert
#define F first
#define S second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test ll t; cin>>t; while(t--)
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
ll dr[] = { -1, 1, 0, 0};
ll dc[] = {0, 0, 1, -1};

/*Functions*/
ll gcd(ll a, ll b);
ll exp(ll x, ll y, ll p);
ll exp(ll x, ll y);
void InverseofNumber();
void InverseofFactorial();
void factorial();
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
ll n;
vector<ll> v;
ll dp[5005][5005];
ll recur(ll start, ll end) {
    if (start > end)
        return 0;
    if (dp[start][end] != -1)
        return dp[start][end];
    ll mini = 1e11, minInd = -1;
    for (ll i = start; i <= end; i++) {
        if (v[i] < mini) {
            mini = v[i], minInd = i;
        }
    }
    for (ll i = start; i <= end; i++)
        v[i] -= mini;
    return dp[start][end] = min(end - start + 1LL, recur(start, minInd - 1) + recur(minInd + 1, end) + mini);



}
int main() {
    clock_t start, end;
    start = clock();
    speed
    // InverseofNumber(),InverseofFactorial(),factorial();
    fileIO();
    cin >> n;
    rep(i, 0, n) {
        ll x; cin >> x;
        v.pb(x);
    }
    memset(dp, -1, sizeof(dp));
    cout << recur(0, n - 1) << endl;



    end = clock();
    double timeTaken = (double(end - start) * (double(1000))) / double(CLOCKS_PER_SEC);
    deb(timeTaken);
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
