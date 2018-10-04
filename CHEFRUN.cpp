#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a[5];
		for(int j=0;j<5;j++)
		cin>>a[j];
		double t1=(float(a[2]-a[0])/a[3]);
		double t2=(float(a[1]-a[2])/a[4]);
		if(t1<t2)
		cout<<"Chef\n";
		if(t1==t2)
		cout<<"Draw\n";
		if(t2<t1)
		cout<<"Kefa\n";
	}
return 0;
}
