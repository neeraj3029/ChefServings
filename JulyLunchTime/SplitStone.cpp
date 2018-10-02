#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a+b+c==x+y&&min(a,min(c,b))<=min(x,y)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
	return 0;