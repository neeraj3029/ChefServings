/***************************

	QUESTION- 	Big Vova
	Link-		https://codeforces.com/contest/1407/problem/B

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

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

void solve(){
	int n;	cin>>n;
	int arr[n];
	int i;
	vector<int> extra;
	int M=INT_MIN;
	fo(i,n){
		cin>>arr[i];
		extra.pb(arr[i]);
		M=max(arr[i],M);
	}

	int min_gcd=M;
	
	while(extra.size()!=0){
		int temp=INT_MIN;
		int number=-1;
		for(int i=0;i<extra.size();i++){
			int k=gcd(extra[i],min_gcd);
			if(temp<=k){
				number=extra[i];
				temp=k;
			}
		}
		min_gcd=temp;
		if(number!=-1){
			cout<<number<<" ";
			vector<int>::iterator it=find(extra.begin(),extra.end(),number);
			extra.erase(it); 
		}
	}

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