// author piyush bafna
#include<iostream>
using namespace std;   
int main()
{
  int n;
  cin>>n;
  int bc=0,oc=0,fl=0;
  char t[n][3],b[n][3];
  for(int i=0;i<n;i++)
  {
    cin>>t[i];
    cin>>b[i];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(t[i][j]=='b' || t[i][j]=='o'||b[i][j]=='b' || b[i][j]=='o')
      {
        if(t[i][j]=='o' || b[i][j]=='o')  oc++;
        if(t[i][j]=='b' || b[i][j]=='b') bc++;
      }
      else
      {
       fl=1;
      }
    }
    if(fl!=1)
    {
      if(bc>=2 && oc>=1) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
    else cout<<"no"<<endl;
    fl=0;
    bc=0;
    oc=0;
  }
}
