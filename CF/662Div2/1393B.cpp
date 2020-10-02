// Link for problem       https://codeforces.com/contest/1393/problem/B

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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vec(pk,pk1) vector<ll> pk(pk1,0)
#define vect(mc) vector<ll> mc
#define vpair(love_pair) vector<pair<ll,ll> > love_pair
#define pb(x) push_back(x)
#define LB(tector,search) lower_bound(tector.begin(),tector.end(),search)
#define UB(tector,search) upper_bound(tector.begin(),tector.end(),search)
#define all(lol) lol.begin(),lol.end()
//#define fileinput; freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
int main()
{
	fast
	ll n;cin>>n;
	ll a[100001]={0};
	map<ll,ll> f8,f4,f2;
	ll cf8=0,cf4=0,cf2=0;
	lp(i,0,n){
		ll x;cin>>x;
		a[x]+=1;
	}
	lp(i,1,100001){
		ll x=i;
		ll te=a[x];
			if(te>=8){
				f8[x]+=te/8;
				cf8+=f8[x];
				te=te%8;
			}
			if(te>=4){
				f4[x]+=te/4;
				cf4+=f4[x];
				te=te%4;
			}
			if(te>=2){
				f2[x]+=te/2;
				cf2+=f2[x];
				
			}
			
	}
//	cout<<cf8<<" "<<cf4<<" "<<cf2<<endl;
	ll q;cin>>q;
 
	while(q--){
		char c;ll x;cin>>c>>x;
		ll pr8=0,pr4=0,pr2=0;
		if(f8.find(x)!=f8.end()){
			pr8=f8[x];
			f8.erase(x);
		}
		if(f4.find(x)!=f4.end()){
			pr4=f4[x];
			f4.erase(x);
		}
		if(f2.find(x)!=f2.end()){
			pr2=f2[x];
			f2.erase(x);
		}
		//cout<<cf8<<" - "<<cf4<<" - "<<cf2<<endl;
		if(c=='-')a[x]-=1;
		else a[x]+=1;
		cf8-=pr8;cf4-=pr4;cf2-=pr2;
		ll te=a[x];
			if(te>=8){
				f8[x]=te/8;
				cf8+=f8[x];
				te=te%8;
				
			}
			if(te>=4){
				f4[x]=te/4;
				cf4+=f4[x];
				te=te%4;
				
			}
			if(te>=2){
				f2[x]=te/2;
				cf2+=f2[x];
				
			}
		
			
			//cout<<cf8<<" "<<cf4<<" "<<cf2<<" ";
			if(cf8>=1||(cf4>=2)||(cf4>=1&&cf2>=2))cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		
	}
}
