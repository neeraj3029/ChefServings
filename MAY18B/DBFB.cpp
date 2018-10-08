#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
void solve(){
	ll m,n,i;
	cin>>m>>n;
	vector<ll>A(m),B(m);
	vector<ll>fib(n);
	for(i=0;i<m;i++)cin>>A[i];
	for(i=0;i<m;i++)cin>>B[i];
	ll sumA=0,sumB=0;
	for(i=0;i<m;i++)
	sumA=(sumA%mod+A[i]%mod)%mod;
	for(i=0;i<m;i++)
	sumB=(sumB%mod+B[i]%mod)%mod;
	ll p=0,q=0;
	p=(m%mod*sumA%mod)%mod;
	q=(m%mod*sumB%mod)%mod;
	fib[0]=p;
	fib[1]=q;
	ll result=0;
	result=(p%mod+q%mod)%mod;
	for(i=2;i<n;i++)
	{
		fib[i]=(fib[i-1]%mod+fib[i-2]%mod)%mod;
	}
	cout<<fib[n-1]<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
