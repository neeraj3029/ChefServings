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
        ll n,x,s;
        cin>>n>>x>>s;
        vector<int> v;
        for(int i=0;i<n;i++)
        v.push_back(i);
        while(s--)
        {
            int a,b;
            cin>>a>>b;
            int temp = v[a-1];
            v[a-1]=v[b-1];
            v[b-1]=temp;
        }
        int ans;
        for(int i=0;i<n;i++)
        {
            if(v[i]==x-1)
            {
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}