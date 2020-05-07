/*
    Solution to problem "Nick and Array"
    Language: C++
    Complexity: O(n)
    Runtime: 108ms
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include<map>
#include <set>
#include <queue>
#include <cstring>
#include <cassert>
#include <limits>
using namespace std;
 
#define rep(i, n)    for(ll i = 0; i < (n); ++i)
#define repA(i, a, n)  for(ll i = a; i <= (n); ++i)
#define repD(i, a, n)  for(ll i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define aint(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define clr(a)  memset(a, 0, sizeof (a))
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
#define pl(a) cout << a << "\n";
#define ps(a) cout << a << " "; 
// g++ codec.cpp && ./a.out
 
 
void solve(){
     int n;cin>>n;
     int a[n];int count = 0;
     pair<int, int> mini;
     mini.first = 0; mini.second = 0;
     rep(i,n) {
        cin >> a[i];
        if(a[i] >= 0) {
            a[i] = -1*a[i] - 1;
        }
        if(a[i] < mini.first) {
            mini.first = a[i];
            mini.second = i;
        }
     }
     if(n%2) {
         a[ mini.second ] = -1*(a[ mini.second ]) - 1;
     } 
     rep(i,n) cout << a[i] << " ";
}
 
int main() {
	cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit); 
    ll t = 1;
    rep(i,t) {
        solve();
    }
	return 0;
}