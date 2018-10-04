#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l,r;
        int count=0;
        cin>>l>>r;
        for(int j=l;j<=r;j++)
        {
            if(j%10==2)
            count++;
            else if(j%10==3)
                count++;
            else if(j%10==9)
                count++;

        }
        cout<<count<<"\n";
    }
    return 0;
}
