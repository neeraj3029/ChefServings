/***************************

	QUESTION- Digit Game
	Link-https://codeforces.com/contest/1419/problem/A

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
	string num;	cin>>num;
	if(n&1){
		for(int i=0;i<n;i+=2){
			if(num[i]&1){
				cout<<1<<endl;
				return;
			}
		}
		cout<<2<<endl;
	}
	else{
		for(int i=1;i<n;i+=2){
			if(num[i]%2==0){
				cout<<2<<endl;
				return;
			}
		}
		cout<<1<<endl;
	}
}

void pb_18(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int t=1;
	cin>>t;
	while(t--)	solve();
}

int32_t main(){
	fast
	pb_18();
	return 0;
}

/******************

	author- pb_18

******************/
