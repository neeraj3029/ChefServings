#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    if (a == b)
        return a;


    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	int n;
	cin>>n;
	int arr[1000];
	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	 int m=arr[0];

	//sort(arr,arr+n);
	for(int i=1;i<n;i++)
	{
	 m=gcd(m,arr[i]);
	}
	if(m==1)
	cout<<"0\n";
	else
    cout<<"-1\n";
}
return 0;
}

