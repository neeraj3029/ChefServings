/***************************

	QUESTION- D2. Sage's Birthday (hard version)
	Link-https://codeforces.com/contest/1419/problem/D2

***************************/

#include<bits/stdc++.h>
using namespace std;
	
	#define 	ll 					 	long long
	#define 	endl 					"\n"
	#define 	int 					long long
	#define 	fo(i,n)					for(i=0;i<n;i++)
	#define 	re(i,n)					for(i=n-1;i<=0;i--)
	#define 	pb 						push_back
    #define 	mp 						make_pair
	#define 	vi 						vector<int>
	#define 	pii 					pair<int,int>
	#define 	mii 					map<int,int>
	#define 	umii 					unordered_map<int,int>
	#define 	si 						set<int>
	#define 	usi 					unordered_set<int>
	#define 	fast 					ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int mod = pow(10,9)+7;
int inf=1e18;

int Log2(int x){
	int ans=0;
	while(x>>=1)	ans++;
	return ans;
}

void solve(){
	int n;	cin>>n;
	int arr[n];
	int i;
	fo(i,n)	cin>>arr[i];
	sort(arr,arr+n);
	int ans[n];
	memset(ans,-1,sizeof(ans));
	int p=0;
	
	for(int i=1;i<n;i+=2){
		ans[i]=arr[p];
		p++;
	}
	for(int i=0;i<n;i++){
		if(ans[i]==-1){
			ans[i]=arr[p];
			p++;
		}
	}
	int k=0;
	for(int i=1;i<n;i+=2){
		if(i!=n-1){
			if(ans[i-1]>ans[i] && ans[i+1]>ans[i])	k++;
		}
	}
	cout<<k<<endl;
	for(auto it: ans)	 cout<<it<<" ";

}

void pb_18(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int t=1;
	// cin>>t;
	while(t--)	solve();
}

int32_t main(){
	fast
	pb_18();
	return 0;
}

/******************

	author- cybertron00

******************/