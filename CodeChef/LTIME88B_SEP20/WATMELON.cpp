#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int
#define tc ll tetra;cin>>tetra;while(tetra--)
#define lp(i,j,k) for(ll i=j;i<k;i++)
#define lpr(i,j,k) for(ll i=j;i>=k;i--)
#define F first
#define S second
#define mod 1000000007
#define fast; ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vec(pk,pk1) vector<ll> pk(pk1,0)
#define vect(mc) vector<ll> mc
#define vpair(love_pair) vector<pair<ll,ll> > love_pair
#define pb(x) push_back(x)
#define LB(tector,search) lower_bound(tector.begin(),tector.end(),search)
#define UB(tector,search) upper_bound(tector.begin(),tector.end(),search)
#define all(lol) lol.begin(),lol.end()
#define fileinput; freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
int main()
{
	fast;
	tc{
		ll n;cin>>n;
		if(n==1){
			ll x;cin>>x;
			if(x>=0)cout<<"YES";
			else cout<<"NO";
		}
		else{
			ll a[n];
			lp(i,0,n)cin>>a[i];
			bool f=true;ll s=0;
			lp(i,0,n)
			{
				s+=a[i];
			}
			if(s<0)f=false;
			
			if(f)cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
		
	}
}
