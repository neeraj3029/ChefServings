#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair
ll mod = pow(10,9) + 7;

int main()
{

    int n;
    cin>>n;
    vector<int> a,b;
    if(n==1)
    {
        a.push_back(1);
        b.push_back(1);
    }
    else if(n==2)
    {
        a = {1,2};
        b = {2,1};
    }
    else
    {
        int t = n/2+1;
        for(int i=1;i<=n;i++)
        {
            if(i!=t)
            a.push_back(i);
        }
        a.push_back(t);
        for(int i=1;i<t-1;i++)
        {
            int temp = a[i];
            a[i] = a[i-1];
            a[i-1]=temp;
        }
        b.push_back(n);
        for(int i=1;i<n;i++)
        b.push_back(i);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}