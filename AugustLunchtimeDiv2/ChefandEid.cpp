#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fuc(i,i1,n) for(ll i=i1;i<n;i++)
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    fuc(i,0,n) cin>>a[i];
    sort(a,a+n);
    int ans=INT_MAX;
    fuc(i,0,n-1)
    {
      if(a[i+1]-a[i]<ans) ans=a[i+1]-a[i];
    }
    cout<<ans<<"\n";
  }
  return 0;
}
