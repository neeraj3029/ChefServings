
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
		result = gcd(result, arr[i]);

	return result;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
	    if(findGCD(arr,n)==1)
	    cout<<0<<endl;
	    else
	    cout<<-1<<endl;
}
	return 0;
}
