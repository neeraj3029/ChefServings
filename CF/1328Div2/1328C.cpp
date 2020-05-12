#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include<map>
#include <set>
#include <queue>
#include <cstring>
#include <cassert>
#include <limits>
using namespace std;
 
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << "{"; for (typename vector<T>::const_iterator vi = v.begin(); vi != v.end(); ++vi) { if (vi != v.begin()) os << ", "; os << *vi; } os << "}"; return os; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { os << '(' << p.first << ", " << p.second << ')'; return os; }
 
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
 
#define rep(i, n)    for(ll i = 0; i < (n); ++i)
#define repA(i, a, n)  for(ll i = a; i <= (n); ++i)
#define repD(i, a, n)  for(ll i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define aint(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define fiint(a)  memset(a, 0, sizeof (a))
#define fst first
#define snd second
#define max(a,b) (a>b)?a:b
#define ll long long
#define mp make_pair
#define pb push_back
const long verybig = 10000000000000;
typedef long double ld;
 
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
#define mod 1000000007
 
 
// g++ codec.cpp && ./a.out
 
void solve(){
	int n; string x;
    cin >> n;
    cin >> x;
    string a = ""; bool so = false;
    string b = "";
    for(int i = 0; i < n; ++i) {
        if(x[i] == '0') {
            a += '0';
            b += '0';
        } else if(x[i] == '1') {
            if(so) {
               a += '0';
               b += '1'; 
            } else {
                a+= '1';
                b += '0';
                so = true;
            }
        } else {
            if(so) {
                a += '0';
                b += '2';
            } else {
                a+='1';
                b += '1';
            }
        }
    }
    cout << a<< "\n" << b << "\n";
}
 
int main() {
	cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit); 

    ll t;
    cin >> t;
    while(t--)
	solve();
	return 0;
}