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
 
int change(int start) {
    if(start == 1) return 2;
    else return 1;
}
// g++ codec2.cpp && ./a.out
 
void solve(){
	int n; cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];
    int ans[n];
    bool allsame = true;
    for(int i = 0; i < n; ++i) {
        if(a[i] != a[(i+1)%n]) {
            allsame = false;
            break;
        }
    }
    if(allsame) {
        cout << "1\n";
        for(int i = 0; i < n; ++i) 
            cout << "1 ";
    } else {
        if(n%2 && a[0] != a[n-1]) {
            bool rep = false;
            rep(i,n-1) if(a[i] == a[i+1]) {
                rep = true;
                break;
            }
            if(rep) {
                cout << "2\n";
                int start = 1;
                cout << start << " ";
                bool d = false;
                for(int i = 1; i <n ; ++i) {
                    // cout  << " " << a[i] << " " << a[i-1] << (a[i] == a[i-1]) <<"\n";
                    bool cond = (a[i] == a[i-1]);
                    
                    if(!d) {
                        
                        if( cond == 1 ) {
                            // cout << "ok";
                            cout << start << " ";
                             d = true;
                        } else {
                            start = change(start);
                            cout << start << " ";
                        }
                       
                    } else {
                        start = change(start);
                        cout << start << " ";
                    }
                }
            } else {
                cout << "3\n";
                rep(i,n-1) {
                    if(i%2) cout << 2 << " ";
                    else cout << 1 << " ";
                }
                cout << 3;
            }
 
            
        } else if(n%2) {
            cout << "2\n";
            rep(i,n-1) {
                    if(i%2) cout << "2 ";
                    else cout << "1 ";
            } 
            if(a[n-1] == a[n-2]) cout << "2 ";
            else cout << "1 ";
        } else {
                cout << "2\n";
                rep(i,n) {
                    if(i%2) cout << "2 ";
                    else cout << "1 ";
                }
            }
        
    }
    
    cout << "\n";
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