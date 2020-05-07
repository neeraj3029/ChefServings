#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
	ll n,i,j,result=0;
	cin>>n;
	vector<ll>arr(n);
	for(i=0;i<n;i++)cin>>arr[i];
	for(i=0;i<n;i++){
		result=result^2*arr[i];
	}
	cout<<result<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
