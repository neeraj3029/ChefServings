#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
void solve(){
	ll n,k,i;
	cin>>n>>k;
	vector<ll>arr(n);
	for(i=0;i<n;i++)cin>>arr[i];
	priority_queue<ll>M; //max heap
	priority_queue<ll,vector<ll>,greater<ll> >T; //min_heap
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		M.push(arr[i]);
		else
		T.push(arr[i]);
	}
	for(i=0;i<k;i++)
	{
		ll x=M.top(); // x contains max Of M
		ll y=T.top(); // y contains min Of T
		M.pop();
		T.pop();
		T.push(x);
		M.push(y);
	}
	ll ST=0;
	ll SM=0;
	while(!M.empty())
	{
		SM+=M.top();
		M.pop();
	}
	while(!T.empty())
	{
		ST+=T.top();
		T.pop();
	}
	if(ST>SM)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
