/***************************

	QUESTION- 	Chocolate Bunny
	Link-		https://codeforces.com/contest/1407/problem/C

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

int query(int x, int y){
	cout<<"? "<<x+1<<" "<<y+1<<endl;
	int z;	cin>>z;
	return z;
}

void solve(){
	int n;	cin>>n;
	int a[n];
	int unkowun=0;

	for(int i=1;i<n;i++){
		int b=query(unkowun,i);
		int c=query(i,unkowun);

		if(b>c){
			a[unkowun]=b;
			unkowun=i;
		}
		else{
			a[i]=c;
		}
	}

	a[unkowun]=n;
	cout<<"! ";
	for(auto it: a)	cout<<it<<" ";
}

void pb_18(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int t;	t=1;
	while(t--)	solve();
}

int main(){
	pb_18();
}


/******************

	author- cybertron00

******************/