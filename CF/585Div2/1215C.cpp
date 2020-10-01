                   /******************gourav_j**************/
#include <bits/stdc++.h>
#define FF first
#define SS second
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define MAXN 100005
#define mem(a, v) memset(a, v, sizeof a)
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define fori(i,a,b) for(int  i=(a);i<=(b);i++)
#define forl(i,a,b) for(ll  i=(a);i<=(b);i++)
#define rfor(i,a,b) for(int i=(b);i>=(a);i--)
#define forit(i, a) for ( __typeof( (a).begin() ) i = (a).begin(); i != (a).end(); i++ )
#define all(v) (v.begin(),v.end())
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef map<string,ll> msi;
typedef set<ll> si;
int dx[] = {-1, 0, 0, 1};
int dy[] = { 0,-1, 1, 0};
                /***********code begins here***********/
void solve(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int> ab,ba;
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        if(s[i]=='a'&&t[i]=='b')
            ab.pb(i);
        else if(s[i]!=t[i])
            ba.pb(i);
    }
    if((ab.size()+ba.size())%2){
        cout<<-1;
        return;
    }
    if(ab.size()%2==1){
        ans.pb({ab.back(),ab.back()});
        ba.pb(ab.back());
        ab.pop_back();
    }
    while(ab.size()>0){
        int k = ab.back();
        ab.pop_back();
        ans.pb({ab.back(),k});
        ab.pop_back();
    }
    while(ba.size()>0){
        int k = ba.back();
        ba.pop_back();
        ans.pb({ba.back(),k});
        ba.pop_back();
    }

    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].FF+1<<" "<<ans[i].SS+1<<'\n';
    }
}
 
int main() {
    
    int T=1; 
    //cin>>T;
    while(T--){
        solve();
        cout<<'\n';
    }
    return 0;
}
