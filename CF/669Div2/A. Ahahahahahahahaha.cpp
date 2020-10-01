/***************************

	QUESTION- 	Ahahahahahahahaha
	Link-		https://codeforces.com/contest/1407/problem/A

***************************/

#include<bits/stdc++.h>
using namespace std;
	
	#define 	ll 					 	long long int
	#define 	fo(i,n)					for(i=0;i<n;i++)
	#define 	re(i,n)					for(i=n-1;i<=0;i--)
	#define 	pb 						push_back
    #define 	mp 						make_pair
    #define 	f  						first
   	#define 	s  						second
   	#define 	umap(type1,type2)		unordered_map<type1,type2>

int mod = pow(10,9)+7;
ll inf=1e18;

int Log2(int x){
	int ans=0;
	while(x>>=1)	ans++;
	return ans;
}

void solve(){
	int n;	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			ans.pb(0);
		}
		else{
			if(arr[i+1]==1){
				ans.pb(1);
				ans.pb(1);
				i++;
			}
		}
	}

	cout<<ans.size()<<endl;
	for(auto it: ans)	cout<<it<<" ";
		cout<<endl;
}

void pb_18(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int t;	t=1;
	cin>>t;
	while(t--)	solve();
}

int main(){
	pb_18();
}

/******************

	author- cybertron00

******************/