""" my submission: https://codeforces.com/contest/1417/submission/94140894 """"

#include<bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
#define BIG(a,b) (a>b)?a:b
#define SMALL(a,b) (a<b)?a:b
#define FOR(i,o,n) for(lli i=o;i<n;i++)
#define mod 1000000007


//vector<vector<int>> t(200,vector<int>(200,-1));
vector<vector<int>> t;
int knapsack(int W[], int V[], int wt, int n)
{
    if(t[n][wt] != -1)
        return t[n][wt];

    if(n==0 || wt==0)
        return t[n][wt]=0;
    else if(W[n-1]>wt)
        return t[n][wt]=knapsack(W,V,wt,n-1);
    else
        return t[n][wt]=max(V[n-1] + knapsack(W,V,wt-W[n-1],n-1),knapsack(W,V,wt,n-1));
}

void solve()
{
    string a,s2;
    cin>>a;
    FOR(i,0,a.size())
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

lli solve(lli n,lli x)
{
    lli a[n],mini1,s=0;
    FOR(i,0,n)
    {
        cin>>a[i];
    }
    lli* mini=min_element(a,a+n);
    mini1=*mini;
    *mini=-1;
    FOR(i,0,n)
    {
        if(a[i]!=-1)
        {
            s+=((x-a[i])/mini1);
        }
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        cout<<solve(n,x)<<"\n";
    }
    return 0;
}
