/*
    Solution to problem "Skier"
    Language: C++
    Complexity: O(n)
    Runtime: 46ms
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
 
typedef pair<int, int> pii;

typedef vector<ll> vi;
#define mod 1000000007
#define pl(a) cout << a << "\n";
#define ps(a) cout << a << " "; 
// g++ codec.cpp && ./a.out
 
void solve(){
    string s;
    cin >> s;
    map< pair<  pair<int, int>,  pair<int, int> >, int> a;
    int lef = 0, rig = 0;
    ll t = 0;
    pair<int, int> prev;
    prev.first = 0; prev.second = 0;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == 'N') rig++;
        else if(s[i] == 'S') rig--;
        else if(s[i] == 'W') lef--;
        else lef++;
        pair<int, int> cur;
        
        cur.first = lef; cur.second = rig;
        pair<pii, pii> p,q;
        p.first = cur;
        p.second = prev;
        q.first = prev;
        q.second = cur;
        if(a[p] >= 1 || a[q] >= 1) {
            t+=1;
        } else t+=5;
        a[p] = 1;
        a[q] = 1;
        prev = cur;
    }
    cout << t << "\n";
}
void pre() {
   
}
int main() {
	cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit); 
    pre();
    ll t;
    cin >> t;
    while(t--)
    solve();
    
	return 0;
}
