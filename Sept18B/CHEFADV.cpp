#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair
ll mod = pow(10,9) + 7;

int main()
{

    ll t ;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        n--;
        m--;
        if((n%x==0 && m%y==0)||(n%x==1 && m%y==1))
        cout<<"Chefirnemo"<<endl;
        else if((n>0 && m>0 && (n-1)%x==0 && (m-1)%y==0))
        cout<<"Chefirnemo"<<endl;
        else
        cout<<"Pofik"<<endl;
        
        
    }
}