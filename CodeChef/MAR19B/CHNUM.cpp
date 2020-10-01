#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
#define fr(n) for (ll i = 0; i < n; i++)
#define clr(a) memset(a, 0x00, sizeof(a))
#define prt(a) cout << a << endl;
#define max(a, b) a > b ? a : b
#define inf 1000000
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll c1 = 0, c2 = 0;
        fr(n)
        {
            cin >> a[i];
            (a[i] > 0) ? c1++ : c2++;
        }
        //cout << (max(c1,c2))  << " " << min(c1,c2) << endl;
        if (c1 == n || c2 == n)
            cout << n << " " << n << endl;
        else
            cout << (max(c1, c2)) << " " << (min(c1, c2)) << endl;
    }
}