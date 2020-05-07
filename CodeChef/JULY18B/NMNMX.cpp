// Author: Shubham Singh Manhas

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long power(long long a,long long b){
  long long temp=1;
  a=a%mod;
  while(b>0){
    if(b%2!=0){
      temp=(temp*a)%mod;
    }
    b/=2;
    a=(a*a)%mod;
  }
  return temp;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    long long c[n+1][n+1],dp[n],ans=1;
    memset(c,0,sizeof(c));
    for(int i=1;i<=n;i++){
      c[i][0]=c[i][i]=1;
      for(int j=1;j<i;j++){
        c[i][j]=(c[i-1][j-1]+c[i-1][j])%(mod-1);
      }
    }
    vector<long long> a(n);
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    sort(a.begin(),a.end());
    dp[0]=0;dp[n-1]=0;
    if(n%2==0){
      for(int i=1;i<n/2;i++){
        dp[i]=(dp[i-1]+c[n-i-1][k-2]);
      }
      for(int i=k-1;i<n/2;i++){
        dp[i]=(dp[i]-c[i][k-1]);
      }
      for(int i=n/2,j=n/2-1;i<n-1;i++,j--){
        dp[i]=dp[j];
      }
    }
    else{
      for(int i=1;i<=n/2;i++){
        dp[i]=(dp[i-1]+c[n-i-1][k-2]);
      }
      for(int i=k-1;i<=n/2;i++){
        dp[i]=(dp[i]-c[i][k-1]);
      }
      for(int i=n/2+1,j=n/2-1;i<n-1;i++,j--){
        dp[i]=dp[j];
      }
    }
    for(int i=1;i<n-1;i++){
      ans=(ans*power(a[i],dp[i]%(mod-1)))%mod;
    }
    cout << ans << "\n";
  }
  return 0;
}
