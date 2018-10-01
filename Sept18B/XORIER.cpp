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
        ll n;
        cin>>n;
        ll even=0, odd=0;
        ll freq[1000001];
        for(int i=0;i<1000001;i++)
        freq[i]=0;
        ll a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            freq[a]++;
            if(a%2==0)
                even++;
            else
                odd++;
        }
        ll ans=(even*(even-1))/2 + (odd*(odd-1))/2;
        for(int i=1;i<1000001;i++)
            ans-=(freq[i]*(freq[i]-1))/2;
        for(int i=1;i<1000000;i+=4)
            ans-=(freq[i]*freq[i+2]);
        for(int i=4;i<pow(10,6);i+=4)
            ans-=(freq[i]*freq[i+2]);
        cout<<ans<<endl;
    }
}